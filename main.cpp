#include <iostream>
#include <windows.h>
#include <cstring>
#include <iomanip>
#include "font.h"

using namespace std;

int main()
{
    int lengthChar = 200;
    char text[lengthChar];
    int lengthText;
    char arah;

kembali:
    system("cls");
    fflush(stdin);
    cout << "masukkan sebuah kalimat : ";
    if (!cin.getline(text, lengthChar))
    {
        cin.clear();
        cout << "tidak sesuai syarat!!" << endl;
        Sleep(1000);
        goto kembali;
    }
    lengthText = strlen(text);

    for (int i = 0; text[i] != '\0'; i++)
    {
        text[i] = toupper(text[i]);
    }

    int index[lengthText];
    for (int i = 0; i < lengthText; i++)
    {
        if (text[i] >= 'A' && text[i] <= 'Z')
        {
            index[i] = (text[i] - 'A' + 1);
        }
        else if (text[i] >= '0' && text[i] <= '9')
        {
            index[i] = (text[i] - '0' + 27);
        }
        else
        {
            index[i] = 0;
        }
    }

    char temp[lengthChar];
    for (int i = 0; i < lengthChar; i++)
    {
        if (i == 0 || i == lengthChar - 1)
        {
            temp[i] = '|';
        }
        else
        {
            temp[i] = ' ';
        }
    }

    if (lengthText != lengthChar)
    {
        for (int i = lengthText; i < lengthChar; i++)
        {
            text[i] = ' ';
        }
    }

kembali2:
    cout << "pilih arah[L/R] : ";
    cin >> arah;
    fflush(stdin);
    if (arah == 'L' || arah == 'l' || arah == 'R' || arah == 'r')
    {
        while (true)
        {
            system("cls");
            cout << setfill('-') << setw(lengthChar) << "-" << endl;

            for (int i = 0; i < lengthChar; i++)
            {
                cout << temp[i];
            }
            if (arah == 'L' || arah == 'l')
            {
                for (int i = 1; i < lengthChar - 2; i++)
                {
                    temp[i] = temp[i + 1];
                }
                temp[lengthChar - 2] = text[0];

                for (int i = 0; i < lengthChar - 1; i++)
                {
                    text[i] = text[i + 1];
                }
                text[lengthChar - 1] = temp[1];
            }
            else if (arah == 'R' || arah == 'r')
            {
                for (int i = lengthChar - 2; i > 1; i--)
                {
                    temp[i] = temp[i - 1];
                }

                temp[1] = text[lengthChar - 1];

                for (int i = lengthChar - 1; i > 0; i--)
                {
                    text[i] = text[i - 1];
                }
                text[0] = temp[lengthChar - 2];
            }

            cout << endl;
            cout << setfill('-') << setw(lengthChar) << "-" << endl;

            Sleep(100);
        }
    }
    else
    {
        cin.clear();
        cout << "tidak sesuai syarat!!" << endl;
        Sleep(1000);
        system("cls");
        goto kembali2;
    }

    cin.get();
    cin.get();
    return 0;
}
