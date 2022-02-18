#ifndef _CHARS_H_
#define _CHARS_H_

#include <iostream>
#include <string>
#include <vector>

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

vector<string> ConvertChar(char **c, int size)
{
    if (size <= 100)
    {
        vector<string> rsarr2{};
        std::cout << "Can not take more than 99 chars." << std::endl;
        return rsarr2;
    }

    int j;
    vector<string> rsarr{};

    for (int i{0}; i < size; i++)
    {
        if (c[i] == spaceStr)
        {
            j++;
            rsarr[j] = "";
        }
        else
        {
            rsarr[j] = rsarr[j] + c[i];
        }
    }

    return rsarr;
}

#endif