
#ifndef POSITION_H
#define POSITION_H

#include<iostream>
#include <graphics.h>

using namespace std;

class Position{
protected:
    int initialX;
    int initialY;

public:
    Position(int _x=0,int _y=0): initialX(_x),initialY(_y) {}
    int getInX(){return initialX;}
    int getInY(){return initialY;}
    void setInX(int _x){initialX = _x;}
    void setInY(int _y){initialY = _y;}
};

#endif