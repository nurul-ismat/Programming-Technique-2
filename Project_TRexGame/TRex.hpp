#include <iostream>
#include <time.h>
#include <windows.h>

using namespace std;

int t;

class TRex
{
public:
    void gotoxy(int x, int y)
    {
        COORD coord;
        coord.X = x;
        coord.Y = y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    }
    void delay(unsigned int mseconds)
    {
        clock_t goal = mseconds + clock();
        while (goal > clock())
            ;
    }
    void getup()
    {
        system("cls");
        gotoxy(10, 2);
        cout << ("Press X to Exit, Press Space to Jump");
        gotoxy(62, 2);
        cout << ("SCORE : ");
        gotoxy(1, 25);
        for (int x = 0; x < 79; x++)
            cout << ("ß");
    }

    int speed = 40;
    void ds(int jump = 0)
    {
        static int a = 1;

        if (jump == 0)
            t = 0;
        else if (jump == 2)
            t--;
        else
            t++;
        gotoxy(2, 15 - t);
        cout << ("                 ");
        gotoxy(2, 16 - t);
        cout << ("         ÜÛßÛÛÛÛÜ");
        gotoxy(2, 17 - t);
        cout << ("         ÛÛÛÛÛÛÛÛ");
        gotoxy(2, 18 - t);
        cout << ("         ÛÛÛÛÛßßß");
        gotoxy(2, 19 - t);
        cout << (" Û      ÜÛÛÛÛßßß ");
        gotoxy(2, 20 - t);
        cout << (" ÛÛÜ  ÜÛÛÛÛÛÛÜÜÜ ");
        gotoxy(2, 21 - t);
        cout << (" ßÛÛÛÛÛÛÛÛÛÛÛ  ß ");
        gotoxy(2, 22 - t);
        cout << ("   ßÛÛÛÛÛÛÛß     ");
        gotoxy(2, 23 - t);
        if (jump == 1 || jump == 2)
        {
            cout << ("    ÛÛß ßÛ       ");
            gotoxy(2, 24 - t);
            cout << ("    ÛÜ   ÛÜ      ");
        }
        else if (a == 1)
        {
            cout << ("    ßÛÛß  ßßß    ");
            gotoxy(2, 24 - t);
            cout << ("      ÛÜ         ");
            a = 2;
        }
        else if (a == 2)
        {
            cout << ("     ßÛÜ ßÛ      ");
            gotoxy(2, 24 - t);
            cout << ("          ÛÜ     ");
            a = 1;
        }
        gotoxy(2, 25 - t);
        if (jump != 0)
        {
            cout << ("                ");
        }
        else
        {

            cout << ("ßßßßßßßßßßßßßßßßß");
        }
        delay(speed);
    }

    int getSpeed(){
        return speed;
    }
    int getTime(){
        return t;
    }

};
