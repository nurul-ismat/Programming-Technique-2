#ifndef ERROR_H
#define ERROR_H
#include <iostream>
#include <string>
#include <graphics.h>
#include "Code.hpp"
using namespace std;

class Error : public Code
{
protected:
public:
    Error() {setHighlightColor(RED);}
    
    int getScore() { return -1; }
    string getTextFile(int _i) { return fileTextError[_i]; }
};

#endif