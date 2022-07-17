#include <iostream>
#include <string>

#include "./TemplateList/TemplateListIF.h"
#include "./list.h"

int main() {
    templateList<list2D> templi;
    list2D li2D;
    list li;

    li.push(0);
    li.push(0.893964);
    li.push("string");

    li2D.push(li);
    templi.push(li2D);
    templi.push(li2D);

    li2D.push(li);

    templi.ch_value(li2D, 1);

    int len = templi.get_len();
    std::cout << len << std::endl;

    templi.push(li2D);
    templi.push(li2D);

    len = templi.get_len();
    std::cout << len << std::endl;

    return 0;
}