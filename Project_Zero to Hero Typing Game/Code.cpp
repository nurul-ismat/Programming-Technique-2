#include "Code.hpp"

Code::Code(int _x, int _y) : x(_x), y(_y) {}

void Code::setY(int _y) { y = _y; }
void Code::setX(int _x) { x = _x; }
void Code::setXY(int _x, int _y)
{
    x = _x;
    y = _y;
}
void Code::displayText()
{
    y = y + 10;
    if (startingLine < 10)
    {
        for (int i = startingLine; i < startingLine + 8; i++)
        {
            text = fileText[i];
            settextstyle(4, HORIZ_DIR, 1);
            setcolor(color);
            outtextxy(x, y, (char *)text.c_str());
            y = y + 30;
        }
    }
    else
        return;
}

void Code::displayNextText()
{
    y = y + 10;
    if (startingLine > 7)
    {
        for (int i = startingLine; i < startingLine + 8; i++)
        {
            text = fileText[i];
            settextstyle(4, HORIZ_DIR, 1);
            setcolor(color);
            outtextxy(x, y, (char *)text.c_str());
            y = y + 30;
        }
    }
    else
        return;
}

void Code::checkInput(string _ch)
{
}

void Code::setText(string _t)
{
    text = _t;
}

void Code::setTextFromFile()
{
    // fileName[0] -> txt1.txt file
    ifstream in(fileName[0]);

    int i = 0;
    string _text[100];

    if (in.is_open())
    {
        while (getline(in, _text[i]))
        {
            while (_text[i].substr(0, 1) == " ")
            {
                _text[i].replace(0, 1, "");
            }

            for (int i = 0; i < _text[i].length(); i++)
            {
                if (_text[i].substr(_text[i].length() - 1, 1) == " ")
                    _text[i].replace(_text[i].length() - 1, 1, "");
            }

            if (_text[i] != "")
            {
                i++;
                lineIndex++;
            }
        }
        in.close();
    }

    else
        cout << "Unable to open file";

    // You need to change the else lagter to outtext not cout
    if (lineIndex > 1)
    {
        lineIndex = i;
        fileText = new string[lineIndex];
    }
    else
        cout << "File can not be assigned please chooce another file" << endl;
    // Test if the file is working
    for (int i = 0; i < lineIndex; i++)
        fileText[i] = _text[i];
    for (int i = 0; i < lineIndex; i++)
        cout << fileText[i] << endl;
}

// change it later to become outtext
string Code::getTextFile(int _i) { return fileText[_i]; }

int Code::getX() { return x; }
int Code::getY() { return y; }
