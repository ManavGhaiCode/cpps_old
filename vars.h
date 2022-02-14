#ifndef _CPPS_VARS_H_
#define _CPPS_VARS_H_

#include <iostream>
#include <string>

#include "./chars/chars.h"

// ERROR array / ERROR string

char ArrBrewERROR[6]{'E', 'R', 'R', 'O', 'R', ':'};
string ERROR = brew(ArrBrewERROR, 6);

// ERROR brew func

string BrewERROR(char var[], int size)
{
    return ERROR + brew(var, size);
}

// "()" arrays and brew

char ArrBrew9[1]{'('};
char ArrBrew0[1]{')'};
string Brew9 = brew(ArrBrew9, 1);
string Brew0 = brew(ArrBrew0, 1);

// add " " str brew

char sstr[1]{' '};
string BrewSStr = brew(sstr, 1);

// empty str function

string estr()
{
    string s = '\0';

    return s;
}

// lol's

char ArrBrewLOL[3]{'l', 'o', 'l'};
string lol = brew(ArrBrewLOL, 3);

// A function to brew LOL

string BrewLOL(char var)
{
    return lol + var;
}

// Hellow World function

char ArrBrewHW[11]{'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd'};
string HW = brew(ArrBrewHW, 11);

#endif