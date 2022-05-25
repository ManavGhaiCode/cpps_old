#include <iostream>

#include "./listClass.h"

int main() {
    list li;

    li.push(1);
    li.push(7.004);
    li.push("lol");

    std::cout << li.at(0, 0) << std::endl;
    std::cout << li.at(1, 0.78) << std::endl;
    std::cout << li.at(2, "") << std::endl;

    li.log();

    return 0;
}