#include <iostream>
#include <string>

#include "./baseNode.h"

class strNode : public baseNode
{
private:
    std::string value;
    int len;

public:
    strNode(std::string val, int i)
    {
        this->value = val;
        this->index = i;
        this->len = val.size();
    }

    int getLen()
    {
        return this->len;
    }

    virtual ~strNode(){};
};