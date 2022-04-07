#include <iostream>

#include "./baseNode.h"

class intNode : public baseNode
{
private:
    int value;

public:
    intNode(int val, int i)
    {
        this->value = val;
        this->index = i;
    }

    virtual ~intNode(){};
};