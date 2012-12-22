#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

    ofBackground(255, 255, 255);
    ofSetCircleResolution(500);
    ofSetFrameRate(60);

    posX = ofGetWidth()/4;
    posY = ofGetHeight()/4;

    flag = 0;

}

//--------------------------------------------------------------
void testApp::update(){
    if(posX+450==ofGetWidth()){
        flag = 1;
    }
    if(posX==0){
        flag = 0;
    }
    if(!flag){
        posX++;
    } else {
        posX--;
    }

}

//--------------------------------------------------------------
void testApp::draw(){

    //ofNoFill();
	//ofSetRectMode(OF_RECTMODE_CENTER); // center around the position
    //ofSetColor(250, 0, 117);
   // ofCircle(posX, posY, 50);

    //ofSetColor(0, 174, 239);
    //ofFill();
    //ofRect(posX-150, posY, 100, 100);

    //W
    ofSetColor(191,59,3);
    ofFill();
    ofTriangle(posX,posY,posX+100,posY,posX,posY+150);
    ofTriangle(posX+100,posY,posX+200,posY,posX+100,posY+150);
    //E
    ofSetColor(217,108,6);
    ofNoFill();
    ofSetLineWidth(4);
    ofCircle(posX+250, posY+100, 50);
    ofLine(posX+200, posY+100, posX+300, posY+100);
    //N
    ofSetColor(217,211,89);
    ofNoFill();
    ofSetLineWidth(4);
    ofLine(posX+350, posY+150, posX+350, posY+50);
    ofLine(posX+350, posY+50, posX+420, posY+50);
    ofLine(posX+420, posY+50, posX+420, posY+150);
    //T
    ofSetColor(160,166,46);
    ofFill();
    ofTriangle(posX,posY+200,posX+100,posY+200,posX,posY+350);
    //i
    ofSetColor(217,211,89);
    ofFill();
    ofRect(posX+150, posY+250, 50, 100);
    ofCircle(posX+175, posY+225, 25);
    //N
    ofSetColor(160,166,46);
    ofNoFill();
    ofSetLineWidth(4);
    ofLine(posX+250, posY+350, posX+250, posY+250);
    ofLine(posX+250, posY+250, posX+320, posY+250);
    ofLine(posX+320, posY+250, posX+320, posY+350);

    ofSetColor(191,59,3);
    ofFill();
    ofCircle(posX+400, posY+300, 50);
    ofLine(posX+448, posY+300, posX+448, posY+400);
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){

}
