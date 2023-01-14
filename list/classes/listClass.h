#include <iostream>
#include <vector>

#include "./nodes.h"

class List
{
    private:
        std::vector<IntNode> vect_Ints;
        std::vector<DoubleNode> vect_Doubles;
        std::vector<StringNode> vect_Strings;

    public:
        List() {};

        ~List() {};
        
};