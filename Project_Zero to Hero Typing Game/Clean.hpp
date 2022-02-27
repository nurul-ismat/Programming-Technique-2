#ifndef CLEAN_H
#define CLEAN_H

#include <graphics.h>
#include <string>
#include <iostream>
#include "Code.hpp"
using namespace std;

class Clean : public Code
{
protected:
public:
    Clean() {setHighlightColor(YELLOW);}
    int getScore() { return 1; }
    string getTextFile(int _i) { return fileText[_i]; }
};


#endif