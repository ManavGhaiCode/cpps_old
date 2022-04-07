#include <iostream>
#include <string>

#include "./baseNode.h"

class strNode : public baseNode
{
private:
    std::string value;

public:
    strNode(std::string val, int i)
    {
        this->value = val;
        this->index = i;
    }

    virtual ~strNode(){};
};