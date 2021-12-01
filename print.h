#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print(int);
void print(double);
void print(string);
void print(char);
void print(int[]);
void print(double[]);
void print(string[]);
void print(char[]);
void print(vector<int>);
void print(vector<double>);
void print(vector<string>);
void print(vector<char>);

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

void print(int var[]) {
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
    for (auto s : var)
        cout << s << endl;
}

void print(vector<double> var)
{
    for (auto s : var)
        cout << s << endl;
}

void print(vector<string> var)
{
    cout << "(" << endl;
    for (auto s : var)
        cout << s << endl;
    cout << ")" << endl;
}

void print(vector<char> var)
{
    for (auto s : var)
        cout << s << endl;
}