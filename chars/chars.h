#include <iostream>
#include <string>
#include "../printExtion/print.h"

using namespace std;

string* Convert(char **c, int size)
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