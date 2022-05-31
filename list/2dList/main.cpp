#include <iostream>

#include "./2dListIF.h"

int main() {
    list li1;

    li1.push(1);
    li1.push(1.0923873);

    list li2;

    li2.push(2);
    li2.push(2.0923873);

    list2D li2d;

    li2d.log();

    li2d.push(li1);
    li2d.push(li2);

    li2d.log();

    li2d.at(0).log();

    return 0;
}