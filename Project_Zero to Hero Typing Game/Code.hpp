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

    int x, y;
    string text;
    int index = 0;
    int color;
    int lineIndex = 0;
    int lineIndexError = 0;
    int newLineIndex = 0;
    string fileName[4] = {"text1.txt", "text2.txt", "tex3,txt", "text4.txt"};
    string *fileText;
    string *fileTextError;
    int startingLine = 0;

    int txtColor, bkColor, hlColor;

    int width, height;

    int center(int len, int min, int max) { return (max + min - len) / 2; } // an helper function to center things
    char *toStr() const { return (char *)text.c_str(); }                    // an helper method for shorthand, so that, no need to typecast everytime pass the text to winbgi function

    int getTextTop() { return center(textheight(toStr()), top(), bottom()); } // an helper method
    int getLeftOfCharAt(int index)                                            // to get the x of character at particular index
    {
        int tx = getTextLeft();
        // get string upto the index, for calculating the width
        string s = text.substr(0, index);
        int w = textwidth((char *)s.c_str());
        return tx + w;
    }

public:

     Code(string t = "", int _x = 0, int _y = 0, int w = 100, int h = 100, int tc = BLACK, int bc = LIGHTGRAY, int hc = YELLOW)
        : text(t), x(_x), y(_y), width(w), height(h), txtColor(tc), bkColor(bc), hlColor(hc) 
        {
             setTextFromFile(1); 
             setTextFromFile(0); 
        }
    int getTextLeft() { return center(textwidth(toStr()), left(), right()); } // an helper method
    int length() const { return text.length(); }
    int left() const { return x; }
    int top() const { return y; }
    int right() const { return x + width; }
    int bottom() const { return y + height; }
    void setHighlightColor(int value) { hlColor = value; }
    
    //Code(int _x = 0, int _y = 0);
    void setY(int _y);
    void setX(int _x);
      void draw()
    {
        // draw the base, rectangle
        // setcolor(bkColor);
        // setfillstyle(SOLID_FILL, bkColor);
        // bar(left(), top(), right(), bottom());

        // draw the text
        setbkcolor(bkColor);
        setcolor(txtColor);
        outtextxy(getTextLeft(), getTextTop(), toStr());
    }

    void drawHighlight(int index, int color)
    {
        // get the character at the index
        char s[] = {text[index], 0}; // this a c-string. must be terminated with a null character (0)
        setbkcolor(bkColor);
        setcolor(color);
        outtextxy(getLeftOfCharAt(index), getTextTop(), s);
    }

    void highlight(int index) // highlight character at particular index
    {
        drawHighlight(index, hlColor);
    }

    void unhighlight(int index) // highlight character at particular index
    {
        drawHighlight(index, bkColor);
    }


    void displayText();
    void displayNextText();
    void checkInput(string);
    void setText(string _t);
    void setColor(int _color) { color = _color; }
    int getLineIndex(){return lineIndex;}
    int getLineIndexError(){return lineIndexError;}
    // virtual
    void setXY(int _x, int _y);
    void setString(string newT){text = newT;}
    string getString(){return text;}

    string getTextFileError(int _i){return fileTextError[_i];}
    void setTextFromFile(int fileIndex);
    void setfiLineIndex(int newIndex){lineIndex = newIndex;} // No need 
    int getX();
    int getY();
    virtual string getTextFile(int _i){}
    virtual int getScore(){}

};

#endif