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

        int at(int index, int type) const  {
            if (index <= indexes) {
                for (long unsigned int i = 0; i < vect_Ints.size(); i = i + 1) {
                    if (vect_Ints.at(i).index == index) {
                        return vect_Ints.at(i).value;
                    }
                }
            } else {
                std::cout << "No value at index: " << index << " was found" << std::endl;
                return -0.00;
            }
        }

        double at(int index, double type) const  {
            if (index <= indexes) {
                for (long unsigned int i = 0; i < vect_Doubles.size(); i = i + 1) {
                    if (vect_Doubles.at(i).index == index) {
                        return vect_Doubles.at(i).value;
                    }
                }
            } else {
                std::cout << "No value at index: " << index << " was found" << std::endl;
                return -0.00;
            }
        }

        std::string at(int index, std::string type) const  {
            if (index <= indexes) {
                for (long unsigned int i = 0; i < vect_Strings.size(); i = i + 1) {
                    if (vect_Strings.at(i).index == index) {
                        return vect_Strings.at(i).value;
                    }
                }
            } else {
                std::cout << "No value at index: " << index << " was found" << std::endl;
                return "-0.00";
            }
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

        int typeIndex(int index) {
            if (index > indexes ) {
                std::cerr << "can't get type of index which doesn't exist..." << std::endl;
                return -0.00;
            } else if (index < 0) {
                std::cerr << "can't get type of index which doesn't exist..." << std::endl;
                return -0.00;
            }

            for (long unsigned int i = 0; i < vect_Ints.size(); i = i + 1) {
                if (vect_Strings.at(i).index == index) {
                    return 0;
                }
            }

            for (long unsigned int i = 0; i < vect_Strings.size(); i = i + 1) {
                if (vect_Strings.at(i).index == index) {
                    return 1;
                }
            }

            for (long unsigned int i = 0; i < vect_Strings.size(); i = i + 1) {
                if (vect_Strings.at(i).index == index) {
                    return 2;
                }
            }
        }
        
};