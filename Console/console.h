#ifndef _CONSOLE_H_
#define _CONSOLE_H_

#include <iostream>
#include <vector>
#include <string>
#include <functional>

#include "../vars.h"
#include "./vars.h"

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
        cout << console << ' ' << '-' << ' '
             << '\n'
             << endl;
        string arr[3];
        arr[0] = lol;
        arr[1] = lol2;
        arr[2] = lol3;

        func_main(arr);
        cout << endl;
    }
};

int main()
{
    return 0;
}

#endif