
#ifndef Screen_H
#define Screen_H

#include<iostream>
#include <graphics.h>
using namespace std;


class Screen {
private:
    
    int x,y,dx,dy,width,height,color;
    int initialX, initialY;
    int sWidth,sHeight;
public:

    Screen(int _x=0, int _y=0, int _width=0, int _height=0, int _dx=0,int _dy=0, int _color=BLUE);
    void setScreen(int _w, int _h);
    int getTop();
    int getBottom();
    int getRight();
    int getLeft();
    void setX(int _x);
    void setY(int _y);
    int getX();
    int getY();
    int getInitialX(){return initialX;};
    int getInitialY(){return initialY;};

    void _draw(int c);
    void draw();
    void undraw();
    void move();
    void setDefaultPosition();
    void getNextRectangle();

};

#endif