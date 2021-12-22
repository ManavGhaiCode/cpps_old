#include <iostream>

#include "list.h"
#include "nodes.h"

using namespace std;

void list::add(int value)
{
    nodeInt newNode {value, indexes};

    VECTOR_OF_INT.push_back(newNode);
}

void list::add(double value)
{
    nodeDouble newNode {value, indexes};

    VECTOR_OF_DOUBLE.push_back(newNode);
}

void list::add(string value)
{
    nodeStr newNode {value, indexes};

    VECTOR_OF_STRING.push_back(newNode);
}