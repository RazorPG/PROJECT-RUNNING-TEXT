#include <iostream>
#include <windows.h>
#include <cstring>
#include <iomanip>

namespace font
{
    const char alfanumerik[37][7][11] = {
        {{"          "},
         {"          "},
         {"          "},
         {"          "},
         {"          "},
         {"          "},
         {"          "}},

        {{"   ###    "},
         {"  ## ##   "},
         {" ##   ##  "},
         {"##     ## "},
         {"######### "},
         {"##     ## "},
         {"##     ## "}},

        {{"########  "},
         {"##     ## "},
         {"##     ## "},
         {"########  "},
         {"##     ## "},
         {"##     ## "},
         {"########  "}},

        {{" ######   "},
         {"##    ##  "},
         {"##        "},
         {"##        "},
         {"##        "},
         {"##    ##  "},
         {" ######   "}},

        {{"########  "},
         {"##     ## "},
         {"##     ## "},
         {"##     ## "},
         {"##     ## "},
         {"##     ## "},
         {"########  "}},

        {{" ######## "},
         {" ##       "},
         {" ##       "},
         {" ######   "},
         {" ##       "},
         {" ##       "},
         {" ######## "}},

        {{" ######## "},
         {" ##       "},
         {" ##       "},
         {" ######   "},
         {" ##       "},
         {" ##       "},
         {" ##       "}},

        {{" ######   "},
         {"##    ##  "},
         {"##        "},
         {"##   #### "},
         {"##    ##  "},
         {"##    ##  "},
         {" ######   "}},

        {{"##     ## "},
         {"##     ## "},
         {"##     ## "},
         {"######### "},
         {"##     ## "},
         {"##     ## "},
         {"##     ## "}},

        {{"   ####   "},
         {"    ##    "},
         {"    ##    "},
         {"    ##    "},
         {"    ##    "},
         {"    ##    "},
         {"   ####   "}},

        {{"       ## "},
         {"       ## "},
         {"       ## "},
         {"       ## "},
         {" ##    ## "},
         {" ##    ## "},
         {"  ######  "}},

        {{" ##    ## "},
         {" ##   ##  "},
         {" ##  ##   "},
         {" #####    "},
         {" ##  ##   "},
         {" ##   ##  "},
         {" ##    ## "}},

        {{" ##       "},
         {" ##       "},
         {" ##       "},
         {" ##       "},
         {" ##       "},
         {" ##       "},
         {" ######## "}},

        {{"##     ## "},
         {"###   ### "},
         {"#### #### "},
         {"## ### ## "},
         {"##     ## "},
         {"##     ## "},
         {"##     ## "}},

        {{" ##    ## "},
         {" ###   ## "},
         {" ####  ## "},
         {" ## ## ## "},
         {" ##  #### "},
         {" ##   ### "},
         {" ##    ## "}},

        {{" #######  "},
         {"##     ## "},
         {"##     ## "},
         {"##     ## "},
         {"##     ## "},
         {"##     ## "},
         {" #######  "}},

        {{"########  "},
         {"##     ## "},
         {"##     ## "},
         {"########  "},
         {"##        "},
         {"##        "},
         {"##        "}},

        {{" #######  "},
         {"##     ## "},
         {"##     ## "},
         {"##     ## "},
         {"##  ## ## "},
         {"##    ##  "},
         {" ##### ## "}},

        {{"########  "},
         {"##     ## "},
         {"##     ## "},
         {"########  "},
         {"##   ##   "},
         {"##    ##  "},
         {"##     ## "}},

        {{"  ######  "},
         {" ##    ## "},
         {" ##       "},
         {"  ######  "},
         {"       ## "},
         {" ##    ## "},
         {"  ######  "}},

        {{" ######## "},
         {"    ##    "},
         {"    ##    "},
         {"    ##    "},
         {"    ##    "},
         {"    ##    "},
         {"    ##    "}},

        {{"##     ## "},
         {"##     ## "},
         {"##     ## "},
         {"##     ## "},
         {"##     ## "},
         {"##     ## "},
         {" #######  "}},

        {{"##     ## "},
         {"##     ## "},
         {"##     ## "},
         {"##     ## "},
         {" ##   ##  "},
         {"  ## ##   "},
         {"   ###    "}},

        {{"##      ##"},
         {"##  ##  ##"},
         {"##  ##  ##"},
         {"##  ##  ##"},
         {"##  ##  ##"},
         {"##  ##  ##"},
         {" ###  ### "}},

        {{"##     ## "},
         {" ##   ##  "},
         {"  ## ##   "},
         {"   ###    "},
         {"  ## ##   "},
         {" ##   ##  "},
         {"##     ## "}},

        {{" ##    ## "},
         {"  ##  ##  "},
         {"   ####   "},
         {"    ##    "},
         {"    ##    "},
         {"    ##    "},
         {"    ##    "}},

        {{" ######## "},
         {"      ##  "},
         {"     ##   "},
         {"    ##    "},
         {"   ##     "},
         {"  ##      "},
         {" ######## "}},

        {{"  #####   "},
         {" ##   ##  "},
         {"##     ## "},
         {"##     ## "},
         {"##     ## "},
         {" ##   ##  "},
         {"  #####   "}},

        {{"    ##    "},
         {"  ####    "},
         {"    ##    "},
         {"    ##    "},
         {"    ##    "},
         {"    ##    "},
         {"  ######  "}},

        {{" #######  "},
         {"##     ## "},
         {"       ## "},
         {" #######  "},
         {"##        "},
         {"##        "},
         {"######### "}},

        {{" #######  "},
         {"##     ## "},
         {"       ## "},
         {" #######  "},
         {"       ## "},
         {"##     ## "},
         {" #######  "}},

        {{"##        "},
         {"##    ##  "},
         {"##    ##  "},
         {"##    ##  "},
         {"######### "},
         {"      ##  "},
         {"      ##  "}},

        {{" ######## "},
         {" ##       "},
         {" ##       "},
         {" #######  "},
         {"       ## "},
         {" ##    ## "},
         {"  ######  "}},

        {{" #######  "},
         {"##     ## "},
         {"##        "},
         {"########  "},
         {"##     ## "},
         {"##     ## "},
         {" #######  "}},

        {{" ######## "},
         {" ##    ## "},
         {"     ##   "},
         {"    ##    "},
         {"   ##     "},
         {"   ##     "},
         {"   ##     "}},

        {{" #######  "},
         {"##     ## "},
         {"##     ## "},
         {" #######  "},
         {"##     ## "},
         {"##     ## "},
         {" #######  "}},

        {{" #######  "},
         {"##     ## "},
         {"##     ## "},
         {" ######## "},
         {"       ## "},
         {"       ## "},
         {" #######  "}}};

}