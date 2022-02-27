#include <graphics.h>
#include <iostream>

using namespace std;

class Ball
{
private:
    int x, y, r;

public:
    Ball();
    Ball(int, int, int);
    void background(int, int);
    void createCircle();
    void move(int);
    void setY(int);
    int getY();
};
void show(Ball, Ball, Ball, Ball, Ball);

int main()
{
    Ball b1(230, 0, 20);
    Ball b2(350, 0, 20);
    Ball b3(600, 0, 20);
    Ball b4(900, 0, 20);
    Ball b5(1100, 0, 20);

    int w = getmaxwidth();
    int h = getmaxheight();

    initwindow(w, h, "Graphic Examples");

    show(b1, b2, b3, b4, b5);

    getch();
    closegraph();
}

Ball::Ball()
{
    x = 0;
    y = 0;
    r = 0;
}

Ball::Ball(int _x, int _y, int _r)
{
    x = _x;
    y = _y;
    r = _r;
}

void Ball::createCircle()
{
    circle(x, y, r);
    setcolor(COLOR(rand() % 255, rand() % 255, rand() % 255));
    setfillstyle(SOLID_FILL, COLOR(rand() % 255, rand() % 255, rand() % 255));
    fillellipse(x, y, r, r);
}

void Ball::background(int w, int h)
{
    setfillstyle(SOLID_FILL, BLACK);
    bar(0, 0, w, h);
}

void Ball::setY(int _y)
{
    y = _y;
}

void Ball::move(int dy)
{
    y += dy;
}

int Ball::getY()
{
    return y;
}

void show(Ball b1, Ball b2, Ball b3, Ball b4, Ball b5)
{
    int w = getmaxwidth();
    int h = getmaxheight();
    while (true)
    {
        b1.background(w, h);

        b1.move(11);
        b2.move(10);
        b3.move(15);
        b4.move(18);
        b5.move(13);

        b1.createCircle();
        b2.createCircle();
        b3.createCircle();
        b4.createCircle();
        b5.createCircle();

        if (b1.getY() > h - 10)
            b1.setY(0);
        if (b2.getY() > h - 10)
            b2.setY(0);
        if (b3.getY() > h - 10)
            b3.setY(0);
        if (b4.getY() > h - 10)
            b4.setY(0);
        if (b5.getY() > h - 10)
            b5.setY(0);

        delay(200);
    }
}