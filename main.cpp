#include <iostream>
#include <windows.h>
#include <cstring>
#include <iomanip>
#include "font.h"

using namespace std;

int main()
{
    int lengthChar = 100;
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

    int index[lengthChar];
    for (int i = 0; i < lengthChar; i++)
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

    char textArray[lengthChar][7][11];

    for (int i = 0; i < lengthChar; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            for (int k = 0; k < 11; k++)
            {
                textArray[i][j][k] = alfanumerik[index[i]][j][k];
            }
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
            cout << setfill('-') << setw(200) << "-" << endl;

            for (int j = 0; j < 7; j++)
            {
                for (int i = 0; i < 20; i++)
                {
                    for (int k = 0; k < 10; k++)
                    {
                        cout << temp[i][j][k];
                    }
                }
                cout << endl;
            }

            if (arah == 'L' || arah == 'l')
            {
                for (int i = 0; i < 20; i++)
                {
                    for (int j = 0; j < 7; j++)
                    {
                        for (int k = 0; k < 10; k++)
                        {
                            if (!(i == 0 && k == 0 || i == 19 && k == 9))
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
                for (int i = 0; i < 7; i++)
                {
                    temp[19][i][8] = textArray[0][i][0];
                }

                for (int i = 0; i < lengthChar; i++)
                {
                    for (int j = 0; j < 7; j++)
                    {
                        for (int k = 0; k < 10; k++)
                        {
                            if (k == 9)
                            {
                                textArray[i][j][k] = textArray[i + 1][j][k - k];
                            }
                            else
                            {
                                textArray[i][j][k] = textArray[i][j][k + 1];
                            }
                        }
                    }
                }
                for (int i = 0; i < 7; i++)
                {
                    textArray[lengthChar - 1][i][9] = temp[0][i][1];
                }
            }

            // else if (arah == 'R' || arah == 'r')
            // {
            //     for (int i = lengthChar - 2; i > 1; i--)
            //     {
            //         temp[i] = temp[i - 1];
            //     }

            //     temp[1] = text[lengthChar - 1];

            //     for (int i = lengthChar - 1; i > 0; i--)
            //     {
            //         text[i] = text[i - 1];
            //     }
            //     text[0] = temp[lengthChar - 2];
            // }

            cout << setfill('-') << setw(200) << "-" << endl;

            Sleep(1);
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
    return 0;
}
