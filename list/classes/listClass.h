#include <iostream>
#include <vector>

#include "./nodes.h"

class list {
    private:
        std::vector<IntNode> vect_Ints;
        std::vector<DoubleNode> vect_Doubles;
        std::vector<StringNode> vect_Strings;

        int len = 0;
        int indexes = -1;

    public:
        list() {};
        ~list() {};

        void push(int raw_value) {
            IntNode value;

            value.value = raw_value;
            value.index = len;
            value.vect_index = vect_Ints.size();

            vect_Ints.push_back( value );

            len += 1;
            indexes += 1;
        }

        void push(double raw_value) {
            DoubleNode value;

            value.value = raw_value;
            value.index = len;
            value.vect_index = vect_Doubles.size();

            vect_Doubles.push_back( value );

            len += 1;
            indexes += 1;
        }

        void push(std::string raw_value) {
            StringNode value;

            value.value = raw_value;
            value.index = len;
            value.vect_index = vect_Strings.size();

            vect_Strings.push_back( value );

            len += 1;
            indexes += 1;
        }

        void log() const {
            std::cout << "[ ";

            for (auto node : vect_Ints)
                std::cout << node.value << ", ";

            for (auto node : vect_Doubles)
                std::cout << node.value << ", ";

            for (auto node : vect_Strings)
                std::cout << "'" << node.value << "'" << ", ";

            std::cout << "]" << std::endl;
        }
        
};