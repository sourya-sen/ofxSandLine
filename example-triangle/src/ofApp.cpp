#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetBackgroundColor(0);
    ofSetBackgroundAuto(false);
    
    //You can draw a triangle by defining three ofPoints...
    ofPoint a(ofGetWidth()/2, 100);
    ofPoint b(100, ofGetHeight()/2);
    ofPoint c(ofGetWidth() - 100, ofGetHeight()/2);
    
    triangle1 = ofxSandTriangle(a, b, c);
    triangle2 = ofxSandTriangle(a + ofPoint(0, 100), b + ofPoint(0, 100), c + ofPoint(0, 100));
    
    //The triangles sides can be set to splines, borrowing from ofxSandLines...
    triangle2.forceSpline();
    
    //The sides can be set individualy too!
    //triangle2.forceSpline(1);
    
    //The offset function can be applied to each edge separately...
    triangle2.setOffset(1, .5, 2, 2, .2);
    
    //...or to all the points...
    //triangle2.setOffset(4);

}

//--------------------------------------------------------------
void ofApp::update(){
    
    //you can also get the position of each vertices as a vector.
    auto p = triangle2.getVertices();
    
    
    cout << " ----------- " <<endl;
    
    for(int i = 0; i<p.size(); i++){
        cout << p[i] << endl;
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //Similar to how ofxSandLine works, call draw with a resolution.
    
    triangle1.draw(200);
    triangle2.draw(200);
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
