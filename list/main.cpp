#include <iostream>
#include "list.h"

using namespace std;

int main()
{
    list myList {};

    myList.add(5);
    myList.add(2);
    myList.add(5.0488);
    myList.add("lol");

    myList.log();
}