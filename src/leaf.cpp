#include "leaf.h"

leaf::leaf(float _x, float _y, float _w, float _h, ofColor _c)
{
    x = _x;
    y = _y;
    w = _w;
    h = _h;
    c = _c;

    //arbitrary numbers to give initial instance information
    thingyDistance = 100;
    thingyRotationMod = 0;
    thingyRotation = 0;
    thingyDistFromCenter = w;
}

void leaf::drawThingy(float _xPos, float _yPos)
{
    ofPushMatrix();
    ofSetColor(c);
    ofFill();

    ofTranslate(_xPos, _yPos);
    ofRotate(thingyRotation);

    ofEllipse( -x, -y, thingyDistFromCenter, thingyDistFromCenter );
    ofEllipse( x, -y, thingyDistFromCenter, thingyDistFromCenter );
    ofEllipse( x, y, thingyDistFromCenter, thingyDistFromCenter );
    ofEllipse( -x, y, thingyDistFromCenter, thingyDistFromCenter );
    ofPopMatrix();
}

void leaf::updateThingy(float _xPos, float _yPos) {
    //captures the distance from thingyX and thingyY to mouseX/MouseY
    thingyDistance = ofDist (_xPos, _yPos, ofGetAppPtr()->mouseX , ofGetAppPtr()->mouseY);

    //maps distance to a value that can be used for rotation
    thingyRotationMod = ofMap (thingyDistance, 0, w, 10, .1);

    //maps distance to a value that can be used for the size of circle
    thingyDistFromCenter = ofMap(thingyDistance, 0, w, 60, 20);

    //determines rotation
    thingyRotation += ofDegToRad(thingyRotationMod);
}

