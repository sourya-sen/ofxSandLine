#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetBackgroundColor(0);
    
    int numLines = 4;
    
    for(int i = 0; i<numLines; i++){
        float spacing = ofGetWidth()/float(numLines);
        
        auto start = ofPoint(i*spacing, ofGetHeight()/2);
        auto end = ofPoint((i+1) * spacing, ofGetHeight()/2);
        
        ofxSandLine l_;
        l_ = ofxSandLine(start, end);
        l_.setMode(SAND_MODE_SPLINE); //optional
        l_.setOffset(4, 2, 2, 4);
        
        lines.push_back(l_);
        
    }
    
    ofSetBackgroundAuto(false);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    for(int i = 0; i < lines.size() - 1; i++){
        
        //getPoints returns all the points of that line
        auto myPoints = lines[i].getPoints();
        
        //get the points of the next line
        auto nextPoints = lines[i+1].getPoints();
        
        //We're setting the first point of the next line as the average between the current lines
        //last point and the next lines first point
        
        auto average = (myPoints[3] + nextPoints[0])/2.0;
        
        lines[i+1].setPoint(1, average);
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
   
    for(auto &l:lines){
        l.draw(300);
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
