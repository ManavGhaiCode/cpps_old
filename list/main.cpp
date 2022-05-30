#include <iostream>

#include "./list.h"

int main() {
    list li;

    li.push(1);
    li.push(2.00);
    li.push("lol");
    li.push('l');

    li.log();

    li.remove(0);

    li.log();
}