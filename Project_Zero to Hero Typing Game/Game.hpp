#ifndef GAME_H
#define GAME_H

#include<graphics.h>
#include <iostream>
#include <string>
#include "Code.hpp"
#include <cstdlib>
#include <ctime>
#include"Screen.hpp"
#include "Clean.hpp"
using namespace std;

class Game{
private:
    int screenWidth, screenHeight;
    Screen s;
    Code c;
public:
    Game();

    int getScreenWidth();
    int getScreenHeight();
    void start();

};

#endif 