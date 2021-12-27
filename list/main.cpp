#include <iostream>
#include "list.h"

using namespace std;

int main()
{
    list myList {};

    myList.add(5);

    auto thing {myList.at(1, 0)};
    cout << thing << endl;
}