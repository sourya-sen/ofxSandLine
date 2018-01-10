#pragma once
#include "ofMain.h"

//inspired by 'Grains of Sand'
//http://inconvergent.net/grains-of-sand/

class ofxSandLine {
public:
    
    ofxSandLine(); //default constructor
    ofxSandLine(ofPoint _p1, ofPoint _p2); //constructor for a straight line
    ofxSandLine(ofPoint _p1, ofPoint _p2, ofPoint _p3, ofPoint _p4); //constructor for a bezier spline
    
    void draw(int _res);
    
    void setOffset(float _offset);
    void setOffset(float _o0, float _o1, float _o2, float _o3);
    void setBreadth(float _breadth);
    void forceSetMode(string mode);
    void setColor(ofColor _c);
    void setMaxSize(int _maxSize);
    void setMaxAlpha(int _maxAlpha);
    
    vector<ofPoint> getPoints();
    
    void setPoint(int _index, ofPoint _p);
    
private:
    int res;
    vector<ofPoint> grains;
    
    void update(int _res);
    
    ofPoint p1, p2, p3, p4;
    float offset [4];
    float breadth;
    int maxSize;
    int maxAlpha;
    ofColor color;
    
    string mode;
    vector<ofPoint> points;
    vector<ofPoint> makeSpline(ofPoint _p1, ofPoint _p2, ofPoint _p3, ofPoint _p4, int _res);
    
    ofPoint midPoints [2];
    void getMidPoints(ofPoint _p1, ofPoint _p4);
    
    void setDefaults();
    
};

//--------------

class ofxSandTriangle : public ofxSandLine{
public:
    ofxSandTriangle();
    ofxSandTriangle(ofPoint _p1, ofPoint _p2, ofPoint _p3);
    
    void draw(int _res);
    void setOffsets(int _edge, float _o0, float _o1, float _o2, float _o3);
    
    vector<ofPoint> getVertices();
    
private:
    ofxSandLine a, b, c;
    //  void update(int _res);
};
