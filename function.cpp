#include <iostream>
#include <windows.h>
#include <cstring>
#include <iomanip>
#include "font.h"
#include "ins.h"

int lengthText;
int idx[maxText];
char text[maxText];
char temp[maxRunning][row][col];
char showFont[maxText][row][col];

void ins::invalid()
{
    std::cin.clear();
    std::cout << "nilai tidak valid!!" << std::endl;
    Sleep(1000);
    system("cls");
}

void ins::toUpperCase(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = toupper(str[i]);
    }
}

void ins::toUpperCase(std::string &str)
{
    for (int i = 0; i < str.length(); i++)
    {
        str[i] = std::toupper(str[i]);
    }
}

void ins::indexFont(char text[], int idx[])
{
    for (int i = 0; i < lengthText; i++)
    {
        if (text[i] >= 'A' && text[i] <= 'Z')
        {
            idx[i] = (text[i] - 'A' + 1);
        }
        else if (text[i] >= '0' && text[i] <= '9')
        {
            idx[i] = (text[i] - '0' + 27);
        }
        else
        {
            idx[i] = 0;
        }
    }

    for (int i = lengthText; i < maxText; i++)
    {
        idx[i] = 0;
    }
}

void ins::createTemp()
{
    for (int i = 0; i < maxRunning; i++)
    {
        for (int j = 0; j < row; j++)
        {
            for (int k = 0; k < col; k++)
            {
                if (i == 0 && k == 0 || i == maxRunning - 1 && k == 9)
                {
                    temp[i][j][k] = '|';
                }
                else
                {
                    temp[i][j][k] = ' ';
                }
            }
        }
    }
}

void ins::createFont()
{
    for (int i = 0; i < maxText; i++)
    {
        for (int j = 0; j < row; j++)
        {
            for (int k = 0; k < col; k++)
            {
                showFont[i][j][k] = font::alfanumerik[idx[i]][j][k];
            }
        }
    }
}

void ins::border()
{
    std::cout << std::setfill('-') << std::setw(200) << "-" << std::endl;
}

void ins::animateFont()
{
    for (int j = 0; j < row; j++)
    {
        for (int i = 0; i < maxRunning; i++)
        {
            for (int k = 0; k < col - 1; k++)
            {
                std::cout << temp[i][j][k];
            }
        }
        std::cout << std::endl;
    }
}

void ins::toLeft(char temp[maxRunning][row][col], char showFont[maxText][row][col])
{
    for (int i = 0; i < maxRunning; i++)
    {
        for (int j = 0; j < row; j++)
        {
            for (int k = 0; k < col - 1; k++)
            {
                if (!(i == 0 && k == 0 || i == 19 && k == col - 2))
                {
                    if (k == 9)
                    {
                        temp[i][j][k] = temp[i + 1][j][k - k];
                    }
                    else
                    {
                        temp[i][j][k] = temp[i][j][k + 1];
                    }
                }
            }
        }
    }
    for (int i = 0; i < row; i++)
    {
        temp[maxRunning - 1][i][col - 3] = showFont[0][i][0];
    }

    for (int i = 0; i < maxText; i++)
    {
        for (int j = 0; j < row; j++)
        {
            for (int k = 0; k < col - 1; k++)
            {
                if (k == 9)
                {
                    showFont[i][j][k] = showFont[i + 1][j][k - k];
                }
                else
                {
                    showFont[i][j][k] = showFont[i][j][k + 1];
                }
            }
        }
    }
    for (int i = 0; i < row; i++)
    {
        showFont[maxText - 1][i][col - 2] = temp[0][i][1];
    }
}

void ins::toRight(char temp[maxRunning][row][col], char showFont[maxText][row][col])
{
    for (int i = maxRunning - 1; i >= 0; i--)
    {
        for (int j = row - 1; j >= 0; j--)
        {
            for (int k = col - 2; k >= 0; k--)
            {
                if (!(i == 0 && k == 0 || i == maxRunning - 1 && k == col - 2))
                {
                    if (k == 0)
                    {
                        temp[i][j][k] = temp[i - 1][j][k + (col - 2)];
                    }
                    else
                    {
                        temp[i][j][k] = temp[i][j][k - 1];
                    }
                }
            }
        }
    }
    for (int i = 6; i >= 0; i--)
    {
        temp[0][i][1] = showFont[maxText - 1][i][col - 2];
    }

    for (int i = maxText - 1; i >= 0; i--)
    {
        for (int j = row - 1; j >= 0; j--)
        {
            for (int k = col - 2; k >= 0; k--)
            {
                if (k == 0)
                {
                    showFont[i][j][k] = showFont[i - 1][j][k + (col - 2)];
                }
                else
                {
                    showFont[i][j][k] = showFont[i][j][k - 1];
                }
            }
        }
    }
    for (int i = 6; i >= 0; i--)
    {
        showFont[0][i][0] = temp[maxRunning - 1][i][col - 3];
    }
}