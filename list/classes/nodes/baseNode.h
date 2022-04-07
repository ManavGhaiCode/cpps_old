#ifndef _BASE_NODE_H_
#define _BASE_NODE_H_

class baseNode
{
protected:
    int index;

    baseNode(){};
    virtual ~baseNode(){};

    virtual int getIndex()
    {
        return this->index;
    }
};

#endif