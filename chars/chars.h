#ifndef _CHARS_H_
#define _CHARS_H_

#include <iostream>
#include <string>
#include "../printExtion/print.h"

using namespace std;

string* ConvertChar(char **c, int size)
{
    if (size <= 100)
    {
        string rsarr2[1] {""};
        print("Can not take more than 99 chars.");
        return rsarr2;
    }

    int j;
    string rsarr[100] {""};

    for (int i {0}; i < size; i++)
    {
        if (c[i] == " ") {
            j++;
            rsarr[j] = "";
        } else {
            rsarr[j] = rsarr[j] + c[i]; 
        }
    }

    return rsarr;
}

string brew(char c[], int size)
{
    string s;
    for (int i {0}; i < size; i++)
    {
        s = s + c[i];
    }  
}

#endif