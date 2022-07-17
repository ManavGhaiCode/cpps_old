#include <iostream>
#include <string>

#include "./3dList/3dList.h"
#include "./list.h"

int main() {
    list li;
    list2D li2D;
    list3D li3D;

    li.push(0);
    li.push(1.8972396);
    li.push("string");

    li2D.push(li);
    li3D.push(li2D);
    li3D.push(li2D);

    li3D.at(0).log();
    li3D.at(1).log();

    return 0;
}