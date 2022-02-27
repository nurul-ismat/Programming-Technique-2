class Cactus{
public:
    TRex trex;
    Cactus(TRex trexArg){
        trex = trexArg;
    }
    int speed = trex.getSpeed();
    void obj()
    {


        static int x = 0, scr = 0;
        if (x == 56 && t < 4)
        {
            scr = 0;
            speed = 40;
            trex.gotoxy(36, 8);
            cout << ("Game Over");
            getch();
            trex.gotoxy(36, 8);
            cout << ("         ");
        }
        trex.gotoxy(74 - x, 20);
        cout << ("Û    Û ");
        trex.gotoxy(74 - x, 21);
        cout << ("Û    Û ");
        trex.gotoxy(74 - x, 22);
        cout << ("ÛÜÜÜÜÛ ");
        trex.gotoxy(74 - x, 23);
        cout << ("  Û    ");
        trex.gotoxy(74 - x, 24);
        cout << ("  Û  ");
        x++;
        if (x == 73)
        {
            x = 0;
            scr++;
            trex.gotoxy(70, 2);
            cout << ("     ");
            trex.gotoxy(70, 2);
            cout << ("%d", scr);
            if (speed > 20)
                speed--;
        }
    }
};
