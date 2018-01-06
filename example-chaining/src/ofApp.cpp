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
        l_.forceSetMode("SAND_MODE_SPLINE"); //optional
        l_.setOffset(4, 2, 2, 4);
        
        lines.push_back(l_);
        
    }
    
    ofSetBackgroundAuto(false);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    for(int i = 0; i < lines.size() - 1; i++){
        
        //getPoints returns all the points of that line
        auto points = lines[i].getPoints();
        
        //we're setting the first point of the next line to be the last point of the previous.
        lines[i+1].setPoint(1, points[3]);
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
