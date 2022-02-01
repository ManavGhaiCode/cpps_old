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

    myList.chValue(0, 987);
    myList.chValue(2, 200.57834);
    myList.chValue(3, "lime");

    myList.log();
}