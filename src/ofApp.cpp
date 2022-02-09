#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(255, 255, 255);
    ofSetColor(0);
    ofSetLineWidth(2);
    //ofNoFill();

    ofSeedRandom(mouseX);
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 5; j++) {

            float x = ofMap(i, 0, 20, 0, 1000);
            float y = ofMap(j, 0, 5, 0, 1000);
            float offset_x = 10;
            float offset_y = 10;

            ofBeginShape();
            ofVertex(x + offset_x + ofRandom(-offset_x, offset_x), y + offset_y + ofRandom(-offset_y, offset_y));
            ofVertex(x + 50 - offset_x + ofRandom(-offset_x, offset_x), y + offset_y + ofRandom(-offset_y, offset_y));
            ofVertex(x + 50 - offset_x + ofRandom(-offset_x, offset_x), y + 200 - offset_y + ofRandom(-offset_y, offset_y));
            ofVertex(x + offset_x + ofRandom(-offset_x, offset_x), y + 200 - offset_y + ofRandom(-offset_y, offset_y));
            ofEndShape(true);

            
            /*
            float offset_x = 9;
            float offset_y = 13;

            float shift_y = ofRandom(-offset_y, offset_y);

            ofBeginShape();
            ofVertex(x + offset_x + ofRandom(-offset_x, offset_x), y + offset_y + shift_y);
            ofVertex(x + 50 - offset_x + ofRandom(-offset_x, offset_x), y + offset_y + shift_y);
            ofVertex(x + 50 - offset_x + ofRandom(-offset_x, offset_x), y + 200 - offset_y + shift_y);
            ofVertex(x + offset_x + ofRandom(-offset_x, offset_x), y + 200 - offset_y + shift_y);
            ofEndShape(true);
            */
        }
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == 'x') {
        img.grabScreen(0, 0, ofGetWidth(), ofGetHeight());
        img.save("screenshot2.png");
    }
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
