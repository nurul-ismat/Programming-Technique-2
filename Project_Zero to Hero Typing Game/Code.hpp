#ifndef Code_H
#define Code_H

#include <fstream>
#include <graphics.h>
#include <iostream>
#include <string>

using namespace std;

class Code
{
protected:
    //Rect r;
    //string text = "int main() cout <<  ";
    //char *c = new char[20]("int main");
    int x, y;
    string text;
    int index = 0;
    int color;
    int lineIndex = 0;
    int newLineIndex = 0;
    string fileName[4] = {"text1.txt", "text2.txt", "tex3,txt", "text4.txt"};
    string *fileText;
    int startingLine = 0;

public:
    Code(int _x = 0, int _y = 0);
    void setY(int _y);
    void setX(int _x);

    void displayText();
    void displayNextText();
    void checkInput(string);
    void setText(string _t);
    void setColor(int _color) { color = _color; }
    int getLineIndex(){return lineIndex;}
    // virtual
    virtual void setXY(int _x, int _y);
    virtual void setString(string newT) {}
    virtual string getString() {return "";}
    virtual void draw() {}
    virtual void highlight(int index) {}
    virtual void unhighlight(int index) {}
    virtual string * getFileText(int index) {return NULL;}
    virtual void compareInput() {};


    string getTextFile(int _i);
    void setTextFromFile();

    int getX();
    int getY();
};

#endif