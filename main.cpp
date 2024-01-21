#include <iostream>
#include <windows.h>
#include <cstring>
#include <iomanip>
#include "font.h"
#include "ins.h"

int main()
{
escape1:
    system("cls");
    std::cout << "masukkan sebuah kalimat : ";
    fflush(stdin);

    if (!std::cin.getline(text, maxText))
    {
        ins::invalid();
        goto escape1;
    }
    lengthText = strlen(text);
    ins::toUpperCase(text);
    ins::indexFont(text, idx);
    ins::createTemp();
    ins::createFont();

escape2:
    std::string direction;
    std::cout << "pilih ke arah[L/R] : ";
    std::getline(std::cin >> std::ws, direction);
    fflush(stdin);
    ins::toUpperCase(direction);

    if (direction == "L" || direction == "R")
    {
        while (true)
        {
            system("cls");
            ins::border();
            ins::animateFont();

            if (direction == "L")
            {
                ins::toLeft(temp, showFont);
            }

            else if (direction == "R")
            {
                ins::toRight(temp, showFont);
            }
            ins::border();
            Sleep(0);
        }
    }
    else
    {
        ins::invalid();
        goto escape2;
    }

    std::cin.get();
    return 0;
}
