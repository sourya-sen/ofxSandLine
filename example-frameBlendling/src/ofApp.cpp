#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    //this example uses disabling the auto background refresh, ofcourse
    //you can also use FBO blending.
    
    ofSetFrameRate(60);
    ofSetBackgroundColor(0);
    ofSetBackgroundAuto(false);
    
    //check the other example for initiation, usage and documentation.
    
    ofPoint start(0, ofGetHeight()/2);
    ofPoint end(ofGetWidth(), ofGetHeight()/2);
    ofPoint control1(ofGetWidth()/3, ofGetHeight()/3);
    ofPoint control2(ofGetWidth() - ofGetWidth()/3, ofGetHeight() - ofGetHeight()/3);
    
    spline = ofxSandLine(start, control1, control2, end);
    spline.setOffset(7);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    spline.draw(1000);
    ofDrawBitmapStringHighlight("press SPACE to clear screen", 15, 15);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
    if(key == ' '){
        ofClear(0);
    }

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
