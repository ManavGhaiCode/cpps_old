#ifndef _CHARS_H_
#define _CHARS_H_

#include <iostream>
#include <string>

using namespace std;

string brew(char c[], int size)
{
    string s;
    for (int i{0}; i < size; i++)
    {
        s = s + c[i];
    }
}

char ArrEmptyStr[1]{'\0'};
string emptyStr = brew(ArrEmptyStr, 1);

char space[1]{' '};
string spaceStr = brew(space, 1);

string *ConvertChar(char **c, int size)
{
    if (size <= 100)
    {
        string rsarr2[1]{emptyStr};
        std::cout << "Can not take more than 99 chars." << std::endl;
        return rsarr2;
    }

    int j;
    string rsarr[100]{emptyStr};

    for (int i{0}; i < size; i++)
    {
        if (c[i] == spaceStr)
        {
            j++;
            rsarr[j] = emptyStr;
        }
        else
        {
            rsarr[j] = rsarr[j] + c[i];
        }
    }

    return rsarr;
}

#endif