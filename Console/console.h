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
        Console(function<int (string[])> func)
        {
            change_FM(func);
        }
};

int main()
{
    return 0;
}