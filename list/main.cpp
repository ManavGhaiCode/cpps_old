#include <iostream>

#include "./list.h"

int main() {
    list li;

    li.push(1);
    li.push(2.01);
    li.push("lol");

    std::cout << li.get_len() << std::endl;

    li.log();
    li.remove(0);
    li.log();

    std::cout << li.at(0, 0.00) << std::endl;
    std::cout << li.at(1, "lol") << std::endl;

    std::cout << li.get_len() << std::endl;
}