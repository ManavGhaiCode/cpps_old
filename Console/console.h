#ifndef _CONSOLE_H_
#define _CONSOLE_H_

#include <iostream>
#include <vector>
#include <string>
#include <functional>

class Console {
    private:
        std::function<int()> func_main = []() -> int {
            std::cout << "Wellcome to CPPS :)" << std::endl;
            return 0;
        };

    public:

        Console(std::function<int()> usr_func_main) {
            this->func_main = usr_func_main;
            this->run();
        }  

        void run() {
            this->func_main();
        }
};

int main()
{
    return 0;
}

#endif