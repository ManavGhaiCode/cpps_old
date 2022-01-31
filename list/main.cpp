#include <iostream>
#include "list.h"
#include "../printExtion/print.h"

using namespace std;

int main()
{
    list myList {};

    myList.add(5);
    myList.add(2);
    myList.add(5.0488);
    myList.add("lol");
    myList.add(5.0488);

    myList.log();

    print(myList.at(0, 0));
    myList.chValue(0, 987);
    print(myList.at(0, 0));

    myList.log();
}