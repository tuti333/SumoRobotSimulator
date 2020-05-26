#ifndef ROBOT_H
#define ROBOT_H
#include "math.h"

class Robot
{
private:
    float x;
    float y;
    float angle;

public:
    Robot(float X, float Y, float ANGLE) : x(X),y(Y),angle(ANGLE){};
    float GetX();
    float GetY();
    float GetAngle();
    void DriveForward(float distance);
    void Update();
};

#endif // ROBOT_H
