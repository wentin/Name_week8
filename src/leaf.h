#ifndef LEAF_H
#define LEAF_H

#include "ofMain.h"

class leaf
{
public:
    leaf(float _x, float _y, float _w, float _h, ofColor _c);
    void drawThingy(float _xPos, float _yPos);
    void updateThingy(float _xPos, float _yPos);

    float x;
    float y;
    float w;
    float h;
    ofColor c;

    float thingyDistance;
    float thingyRotation;
    float thingyRotationMod;
    float thingyDistFromCenter;

protected:
private:
};

#endif // LEAF_H
