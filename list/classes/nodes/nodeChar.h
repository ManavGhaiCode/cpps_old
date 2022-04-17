#include <iostream>

class nodeChar
{
private:
    int index;
    int vect_index;

    char value;

public:
    nodeChar(int index, int vect_index, char value)
    {
        this->index = index;
        this->vect_index = vect_index;

        this->value = value;
    }
};