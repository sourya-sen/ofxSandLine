#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundColor(0);

    //A straight line constructor.
    //it needs two ofpoints (start point and end point)
    line = ofxSandLine(ofPoint(0, ofGetHeight()/3), ofPoint(ofGetWidth(), ofGetHeight()/3));

    //A spline constructor.
    //it needs four points (start point and end point and two control points)
    ofPoint start(0, ofGetHeight() - ofGetHeight()/3);
    ofPoint end(ofGetWidth(), ofGetHeight() - ofGetHeight()/3);
    ofPoint control1(ofGetWidth()/3, ofGetHeight());
    ofPoint control2(ofGetWidth() - ofGetWidth()/3, ofGetHeight() - ofGetHeight()/3);

    spline = ofxSandLine(start, control1, control2, end);

    //Additional options can be set with these:

    //sets the max size of the grains (default: 1)
    line.setMaxSize(2);
    spline.setMaxSize(2);

    //sets the spread of the grains (default: 1)
    line.setBreadth(1);

    //sets the color of the grains (default: white)
    line.setColor(ofColor(255, 255, 255));

    //sets the maximum alpha value (default: 64)
    line.setMaxAlpha(64);

    //sets the offset over time of the grains (default: 1)
    //if you don't want it to move away from it's start position, set to 0
    line.setOffset(0);
    //you can also set each of the four points' offset individually by doing
    spline.setOffset(0, 2, , 2, 1);

    //because a straight line is implicitly being drawn as a spline with some math [;)] there's a way to
    //force it to behave like a spline over time
    //additionaly a spline can also be set to "SAND_MODE_LINE" but will move the control points away
    //and make it into a straight line, so maybe not recommended.
    line.forceSetMode("SAND_MODE_SPLINE"); //note: this actually won't work here because the offset is set to 0;

}

//--------------------------------------------------------------
void ofApp::update(){

    //the draw function calls the update method implicitly, so nothing to do here :)

}

//--------------------------------------------------------------
void ofApp::draw(){

    //draw functions need a "resolution" specified.
    //the actual number of grains being drawn is resolution/4.

    line.draw(5000);
    spline.draw(5000);

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
