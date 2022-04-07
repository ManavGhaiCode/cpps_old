#include <iostream>

#include "./baseNode.h"

class douNode : public baseNode
{
private:
    double value;

public:
    douNode(double val, int i)
    {
        this->value = val;
        this->index = i;
    }

    virtual ~douNode(){};
};