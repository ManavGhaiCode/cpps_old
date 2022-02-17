#ifndef _INPUT_H_
#define _INPUT_H_

#include <iostream>
#include <string>

using namespace std;

string input(string inputStr)
{
    string userInputStr;
    cout << inputStr;
    cin >> userInputStr;
    return userInputStr;
}

#endif