#include "Game.hpp"
// WET _ repeat yourself more than twice
// DRY _ Do not repeat the code twice

Game::Game()
{
    screenWidth = getmaxwidth();
    screenHeight = getmaxheight();
}

void Game::start()
{
    srand(time(NULL));
    initwindow(screenWidth, screenHeight, "Zero To Hero");
    setfillstyle(SOLID_FILL, BLUE);
    bar(0, 0, screenWidth, screenHeight);
    s = Screen(0, 0, screenWidth - 200, 400, 0, -2, BLUE);
    s.setScreen(screenWidth, screenHeight);
    s.setDefaultPosition();
    s.setX(s.getInitialX());
    s.setY(s.getInitialY());
    s.draw();
    // Code to type
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);
    Clean cleanCode;
    Error errorCode;
    Code *currentCode = &cleanCode;

    char key = 0;
    int charIndex = 0;
    bool nextLine = false;
    int lineIndex = 0;
    int spaceLines = 0;
    int xPosition;
    int yPosition;
    bool endOfGame = false;
    int MAXLINES = 4;
    bool error = false;
    int errorLineIndex = 0;
    int temp;
    int *currentLineIndex = &lineIndex;
    temp = errorLineIndex;

    while (key != 27)
    {
        currentLineIndex = &lineIndex;
        if (lineIndex >= 2 && lineIndex <= 5 || lineIndex >= 2 && lineIndex <= 5 )
        {

            currentCode = &errorCode;
            currentLineIndex = &errorLineIndex;
            error = true;
            if (errorLineIndex > temp)
            {
                lineIndex++;
                temp++;
            }
        }
        else
        {
            currentCode = &cleanCode;
            currentLineIndex = &lineIndex;
            error = false;
        }

        xPosition = s.getX() + 800; // txt position

        s.move();
        s.displayScore();

        if (MAXLINES >= 1)
        {
            for (int i = 0; i < MAXLINES; i++)
            {
                currentCode->setString(currentCode->getTextFile(*currentLineIndex + i));
                currentCode->setXY(xPosition, s.getY() + spaceLines);
                currentCode->draw();
                spaceLines += 50;
            }
        }
        spaceLines = 0;
        currentCode->setString(currentCode->getTextFile(*currentLineIndex));
        currentCode->setXY(xPosition, s.getY() + spaceLines);
        currentCode->highlight(charIndex);

        if (endOfGame)
        {
            (*currentLineIndex)++;
            charIndex = 0;
            MAXLINES -= 1;
            endOfGame = false;
        }
        else if (nextLine)
        {
            (*currentLineIndex)++;
            charIndex = 0;
            nextLine = false;
        }

        if (kbhit())
        {

            key = getch();
            if (key == currentCode->getString()[charIndex])
            {
                currentCode->highlight(charIndex);
                charIndex++;
                s.setScore(currentCode->getScore());
            }
            if (!error)
            {
                if ((charIndex >= currentCode->getString().length() && key == 13)) //|| (error && key == 13))
                {

                    if (*currentLineIndex + MAXLINES >= currentCode->getLineIndex())
                        endOfGame = true;
                    else
                        nextLine = true;
                }
            }
            if (error)
            {
                if (key == 13)
                {
                    nextLine = true;
                }
            }

        } //if(kbhit())

        // You win celebration
        if (*currentLineIndex >= currentCode->getLineIndex())
        {
            setfillstyle(SOLID_FILL, BLACK);
            bar(0, 0, screenWidth, screenHeight);
            while (true)
            {
                setbkcolor(BLACK);
                setcolor(YELLOW);
                outtextxy(screenWidth / 2 - 170, screenHeight / 2 - 30, "You Win!");
            }
        }

        // getNextRectangle
        if (s.getBottom() < 0)
        {
            s.getNextRectangle();
        }

        delay(40);
    }
}

