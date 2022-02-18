#ifndef _CONSOLE_H_
#define _CONSOLE_H_

#include <iostream>
#include <vector>
#include <string>
#include <functional>

#include "../vars.h"
#include "./vars.h"
#include "../chars/chars.h"

using namespace std;

vector<string> mainArgs{};

class Console
{
private:
    function<int(vector<string>)> func_main = [](vector<string>) -> int
    {
        cout << HW << endl;
        return 0;
    };
    void change_FM(function<int(vector<string>)> func) { func_main = func; }

public:
    Console()
    {
        this->run();
    }

    Console(function<int(vector<string>)> func)
    {
        change_FM(func);
        this->run();
    }

    void run()
    {
        cout << console << ' ' << '-' << ' '
             << '\n'
             << endl;

        func_main(mainArgs);
        cout << endl;
    }
};

int main(char **args, int size)
{
    vector<string> cArgs = ConvertChar(args, size);

    return 0;
}

#endif