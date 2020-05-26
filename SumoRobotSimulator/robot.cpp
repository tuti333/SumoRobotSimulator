#include "robot.h"
#include "mainwindow.h"

extern MainWindow *w;

float Robot::GetX()
{
    return x;
}

float Robot::GetY()
{
    return y;
}

float Robot::GetAngle()
{
    return angle;
}

void Robot::DriveForward(float distance)
{
    x = x + sinf(angle * M_PI / 180.0f) * distance;
    y = y + cosf(angle * M_PI / 180.0f) * distance;
}

void Robot::Update()
{
    if(w->simulationState == 1){
        DriveForward(0.01);
    }
}

