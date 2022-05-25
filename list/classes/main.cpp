#include <iostream>

#include "./listClass.h"

int main() {
    list li;

    li.push(0);
    li.push(7.004);
    li.push("lol");

    std::cout << li.at(0, 0) << std::endl;
    std::cout << li.at(1, 0.78) << std::endl;
    std::cout << li.at(2, "") << std::endl;

    li.log();

    li.ch_value(1, 0);
    li.ch_value(1.856, 1);
    li.ch_value(1.856, 1);
    li.ch_value("mu-kay", 2);

    li.log();

    return 0;
}