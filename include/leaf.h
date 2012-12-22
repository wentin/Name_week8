#ifndef LEAF_H
#define LEAF_H

#include "ofMain.h"

class leaf
{
public:
    leaf(float x, float y, float w, float h, ofColor c);
    void drawThingy(float xPos, float yPos);
    void updateThingy(float xPos, float yPos);

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
