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
    void setBreadth(float _breadth);
    void forceSetMode(string mode);
    void setColor(ofColor _c);
    void setMaxSize(int _maxSize);
    void setMaxAlpha(int _maxAlpha);
    
private:
    int res;
    vector<ofPoint> grains;
    
    void update(int _res);
    
    ofPoint p1, p2, p3, p4;
    float offset;
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

