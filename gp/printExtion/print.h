#ifndef _PRINT_H_
#define _PRINT_H_

#include <iostream>
#include <string>
#include <vector>

#include "../../vars.h"

using std::cout;
using std::endl;
using std::string;
using std::vector;

void print(int var)
{
    cout << var << endl;
}

void print(double var)
{
    cout << var << endl;
}

void print(string var)
{
    cout << var << endl;
}

void print(char var)
{
    cout << var << endl;
}

void print(int var[])
{
    cout << var << endl;
}

void print(double var[])
{
    cout << var << endl;
}

void print(string var[])
{
    cout << var << endl;
}

void print(char var[])
{
    cout << var << endl;
}

void print(vector<int> var)
{
    cout << "[ ";

    for (auto s : var)
        cout << s << ", ";

    cout << "]" << endl;
}

void print(vector<double> var)
{
    cout << "[ ";

    for (auto s : var)
        cout << s << ", ";

    cout << "]" << endl;
}

void print(vector<string> var)
{
    cout << "[ ";

    for (auto s : var)
        cout << s << ", ";

    cout << "]" << endl;
}

void print(vector<char> var)
{
    cout << "[ ";

    for (auto s : var)
        cout << s << ", ";

    cout << "]" << endl;
}

void print(int var, bool opt)
{
    if (opt == true)
        cout << var << endl;
    else
        cout << var;
}

void print(double var, bool opt)
{
    if (opt == true)
        cout << var << endl;
    else
        cout << var;
}

void print(string var, bool opt)
{
    if (opt == true)
        cout << var << endl;
    else
        cout << var;
}

void print(char var, bool opt)
{
    if (opt == true)
        cout << var << endl;
    else
        cout << var;
}

void print(int var[], bool opt)
{
    if (opt == true)
        cout << var << endl;
    else
        cout << var;
}

void print(double var[], bool opt)
{
    if (opt == true)
        cout << var << endl;
    else
        cout << var;
}

void print(string var[], bool opt)
{
    if (opt == true)
        cout << var << endl;
    else
        cout << var;
}

void print(char var[], bool opt)
{
    if (opt == true)
        cout << var << endl;
    else
        cout << var;
}

void print(vector<int> var, bool opt)
{
    if (opt == true)
    {
        cout << "[ ";

        for (auto s : var)
            cout << s << ", ";

        cout << "]" << endl;
    }
    else
    {
        cout << "[ ";

        for (auto s : var)
            cout << s << ", ";

        cout << "]";
    }
}

void print(vector<double> var, bool opt)
{
    if (opt == true)
    {
        cout << "[ ";

        for (auto s : var)
            cout << s << ", ";

        cout << "]" << endl;
    }
    else
    {
        cout << "[ ";

        for (auto s : var)
            cout << s << ", ";

        cout << "]";
    }
}

void print(vector<string> var, bool opt)
{
    if (opt == true)
    {
        cout << "[ ";

        for (auto s : var)
            cout << s << ", ";

        cout << "]" << endl;
    }
    else
    {
        cout << "[ ";

        for (auto s : var)
            cout << s << ", ";

        cout << "]";
    }
}

void print(vector<char> var, bool opt)
{
    if (opt == true)
    {
        cout << "[ ";

        for (auto s : var)
            cout << s << ", ";

        cout << "]" << endl;
    }
    else
    {
        cout << "[ ";

        for (auto s : var)
            cout << s << ", ";

        cout << "]";
    }
}

#endif