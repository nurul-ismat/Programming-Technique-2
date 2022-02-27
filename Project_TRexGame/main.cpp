#include "TRex.hpp"
#include "Cactus.hpp"

int main()
{
    system("mode con: lines=29 cols=82");
    TRex trex;
    Cactus cactus(trex);
    char ch;
    int i;
    trex.getup();
    while (true)
    {
        while (!kbhit())
        {
            trex.ds();
            cactus.obj();
        }
        ch = getch();
        if (ch == ' ')
        {
            for (i = 0; i < 10; i++)
            {
                trex.ds(1);
                cactus.obj();
            }
            for (i = 0; i < 10; i++)
            {
                trex.ds(2);
                cactus.obj();
            }
        }
        else if (ch == 'x')
        
        system("pause");
        
            return (0);
    }
}
