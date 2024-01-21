#include <iostream>
#include <windows.h>
#include <cstring>
#include <iomanip>

#define maxRunning 20
#define maxText 50
#define row 7
#define col 11

extern int lengthText;
extern int idx[maxText];
extern char text[maxText];
extern char temp[maxRunning][row][col];
extern char showFont[maxText][row][col];
extern std::string direction;

namespace ins
{
    void indexFont(char text[], int idx[]);
    void toUpperCase(char str[]);
    void toUpperCase(std::string &str);
    void createTemp();
    void createFont();
    void border();
    void animateFont();
    void toLeft(char temp[maxRunning][row][col], char showFont[maxText][row][col]);
    void toRight(char temp[maxRunning][row][col], char showFont[maxText][row][col]);
    void invalid();
}