//Program Name: C++ Early Objects, Chapter 7, Problem 5, Pg. 479
//Programmer: Collin Stevens
//Contact: StevensCollin96@gmail.com

#include <iostream>
#include <windows.h>

void time(int timeCount);
void placeCursor(HANDLE screen, int column, int row);
void screenClear();

int main()
{
    HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);

    int upPosX = 5,
        upPosY = 23,
        downPosX = 71,
        downPosY = 1;

    for(int yCount = -1; yCount <= upPosY; upPosY--, downPosY++)
    {
        placeCursor(screen, upPosX, upPosY + 1);
        std::cout << "  ";
        placeCursor(screen, upPosX, upPosY);
        std::cout << "Up";

        placeCursor(screen, downPosX, downPosY - 1);
        std::cout << "    ";
        placeCursor(screen, downPosX, downPosY);
        std::cout << "Down";

        placeCursor(screen, 5, 23);

        Sleep(1000);
    }

    placeCursor(screen, downPosX, downPosY);
    screenClear();

    return 0;
}

void placeCursor(HANDLE screen, int column, int row)
{
    COORD position;
    position.X = column;
    position.Y = row;
    SetConsoleCursorPosition(screen, position);
}

void screenClear()
{
    std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
}
