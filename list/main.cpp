#include "./classes/listClass.h"

int main() {
    list li;

    li.push(1538);
    li.push(0.0111);
    li.push("hi ...");

    li.log();

    std::cout << li.at(0, 0) << std::endl;
    std::cout << li.at(1, 0.00) << std::endl;
    std::cout << li.at(2, "lol") << std::endl;

    return 0;
}