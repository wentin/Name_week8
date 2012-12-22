#ifndef BALL_H
#define BALL_H

#include "ofMain.h"

class ball
{
public:
    ball();
    void update();
    void draw();

    float posX, posY, speed;
};

#endif // BALL_H
