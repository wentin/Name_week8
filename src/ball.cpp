#include "ball.h"

ball::ball()
{
    //ctor
    speed = 1;
    posX = 20;
    posY = ofRandom(ofGetHeight());
}

void ball::update(){
    speed++;
    posX += speed;

    if((posX >= ofGetWidth())||(posX <= 0)){
        speed *= -1;
    }
}

void ball::draw(){
    posX = speed + posX;
    ofSetColor(191,59,3);
    //ofFill();
    ofNoFill();
    ofCircle(posX, posY, 20);
}
