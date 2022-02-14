#ifndef _CONSOLE_H_
#define _CONSOLE_H_

#include <iostream>
#include <vector>
#include <string>
#include <functional>

#include "../vars.h"

using namespace std;

class Console
{
private:
    function<int(string[])> func_main = [](string args[]) -> int
    {
        cout << HW << endl;
        return 0;
    };
    void change_FM(function<int(string[])> func) { func_main = func; }

public:
    Console()
    {
        this->run();
    }

    Console(function<int(string[])> func)
    {
        change_FM(func);
        this->run();
    }

    void run()
    {
        cout << "Console - "
             << '\n'
             << endl;
        string arr[3];
        arr[0] = BrewLOL('\0');
        arr[1] = BrewLOL('2');
        arr[2] = BrewLOL('3');

        func_main(arr);
        cout << endl;
    }
};

int main()
{
    return 0;
}

#endif