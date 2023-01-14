#include <iostream>
#include <vector>

#include "./nodes.h"

class List
{
    private:
        std::vector<IntNode> vect_Ints;
        std::vector<DoubleNode> vect_Doubles;
        std::vector<StringNode> vect_Strings;

        int len = 0;
        int indexes = -1;

    public:
        List() {};
        ~List() {};

        void push(int raw_value) {
            IntNode value;

            value.value = raw_value;
            value.index = len;
            value.vect_index = vect_Ints.size();

            vect_Ints.push_back( value );

            len += 1;
            indexes += 1;
        }
        
};