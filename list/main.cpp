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

    // cout << myList << endl;
    cout << myList << endl;
}