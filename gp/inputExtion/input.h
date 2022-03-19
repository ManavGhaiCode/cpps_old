#ifndef _INPUT_H_
#define _INPUT_H_

#include <iostream>
#include <string>

using namespace std;

string input(string inputStr)
{
    string usrtInput;
    cout << inputStr;
    cin >> usrtInput;
    return usrtInput;
}

double outDloubleInput(string inputStr)
{
    double usrtInput;
    cout << inputStr;
    cin >> usrtInput;

    return usrtInput;
}

#endif