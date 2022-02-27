#include "Code.hpp"

//Code::Code(int _x, int _y) : x(_x), y(_y) {}

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

void Code::setTextFromFile(int fileIndex)
{

    // fileName[0] -> txt1.txt file
    ifstream in(fileName[fileIndex]);

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
            // Manage Lines with length bigger than 50 character
            if (_text[i].length() > 50)
            {
                string newText = _text[i].substr(51, _text[i].length());
                _text[i].replace(51, _text[i].length(), "");

                _text[i + 1] = newText;
                if (!_text[i + 1].length() > 50)
                {
                    i += 2;
                    lineIndex += 2;
                    continue;
                }
                if (_text[i + 1].length() > 50)
                {

                    string newText2 = _text[i + 1].substr(51, _text[i + 1].length());
                    _text[i + 1].replace(51, _text[i + 1].length(), "");
                    _text[i + 2] = newText2;
                    i += 3;
                    lineIndex += 3;
                    continue;
                }
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
    if (fileIndex == 0)
    {
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

    else if (fileIndex == 1)
    {
       {
        if (lineIndex > 1)
        {
            lineIndexError = i;
            fileTextError = new string[lineIndexError];
        }
        else
            cout << "File can not be assigned please chooce another file" << endl;
        // Test if the file is working
        for (int i = 0; i < lineIndexError; i++)
            fileTextError[i] = _text[i];
        for (int i = 0; i < lineIndexError; i++)
            cout << fileTextError[i] << endl;
    } 
    }
}

// change it later to become outtext
//string Code::getTextFile(int _i) { return fileText[_i]; }

int Code::getX() { return x; }
int Code::getY() { return y; }
