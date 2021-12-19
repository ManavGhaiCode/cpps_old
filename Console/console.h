#ifndef _CONSOLE_H_
#define _CONSOLE_H_

#include <iostream>
#include <vector>
#include <string>
#include <functional>

using namespace std;

class Console
{
    private:
        function<int (string[])> func_main = [](string args[]) -> int {
            cout << "Hello World" << endl;
            return 0;
        };
        void change_FM(function<int (string[])> func) { func_main = func; }

    public:

        Console()
        {
            this->run();
        }

        Console(function<int (string[])> func)
        {
            change_FM(func);
            this->run();
        }

        void run()
        {
            cout << "Console - " << "\n" << endl;
            string arr[] {"lol", "lol2", "lol3"};
            func_main(arr);
            cout << endl;
        }
};

int main()
{
    return 0;
}

#endif