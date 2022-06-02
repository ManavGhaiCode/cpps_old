#ifndef _LIST_CLASS_H_
#define _LIST_CLASS_H_

#include <iostream>
#include <vector>
#include <string>

#include "./allNodes.h"

class list {
    private:
        int len = 0;
        int indexes = -1;

        std::vector<nodeInt> vector_of_ints;
        std::vector<nodeDouble> vector_of_doubles;
        std::vector<nodeString> vector_of_strings;

        void Dindexes(int index) {
            for (nodeInt node : vector_of_ints)
                if (node.index > index)
                    vector_of_ints[node.vect_index].index = index - 1;

            for (nodeDouble node : vector_of_doubles)
                if (node.index > index)
                    vector_of_doubles[node.vect_index].index = index - 1;

            for (nodeString node : vector_of_strings)
                if (node.index > index)
                    vector_of_strings[node.vect_index].index = index - 1;
        }
    public:
        void push(int val) {
            nodeInt new_node { ( indexes + 1 ), vector_of_ints.size(), val };
            vector_of_ints.push_back(new_node);

            indexes = indexes + 1;
            len = len + 1;
            
            return;
        }

        void push(double val) {
            nodeDouble new_node { ( indexes + 1 ), vector_of_doubles.size(), val };
            vector_of_doubles.push_back(new_node);

            indexes = indexes + 1;
            len = len + 1;
            
            return;
        }

        void push(std::string val) {
            nodeString new_node { ( indexes + 1 ), vector_of_strings.size(), val };
            vector_of_strings.push_back(new_node);

            indexes = indexes + 1;
            len = len + 1;
            
            return;
        }

        int at(int index, int type) const  {
            if (index <= indexes) {
                for (int i = 0; i < vector_of_ints.size(); i = i + 1) {
                    if (vector_of_ints.at(i).index == index) {
                        return vector_of_ints.at(i).value;
                    }
                }
            } else {
                std::cout << "No value at index: " << index << " was found" << std::endl;
                return -0.00;
            }
        }

        double at(int index, double type) const  {
            if (index <= indexes) {
                for (int i = 0; i < vector_of_doubles.size(); i = i + 1) {
                    if (vector_of_doubles.at(i).index == index) {
                        return vector_of_doubles.at(i).value;
                    }
                }
            } else {
                std::cout << "No value at index: " << index << " was found" << std::endl;
                return -0.00;
            }
        }

        std::string at(int index, std::string type) const  {
            if (index <= indexes) {
                for (int i = 0; i < vector_of_strings.size(); i = i + 1) {
                    if (vector_of_strings.at(i).index == index) {
                        return vector_of_strings.at(i).value;
                    }
                }
            } else {
                std::cout << "No value at index: " << index << " was found" << std::endl;
                return "-0.00";
            }
        }

        void log() const {
            std::cout << "[ ";

            for (auto node : vector_of_ints)
                std::cout << node.value << ", ";

            for (auto node : vector_of_doubles)
                std::cout << node.value << ", ";

            for (auto node : vector_of_strings)
                std::cout << node.value << ", ";

            std::cout << "]" << std::endl;
        }

        void ch_value(int value, int index) {
            for (nodeInt node : vector_of_ints)
                if (node.index == index)
                    vector_of_ints[node.vect_index].value = value;
        }

        void ch_value(double value, int index) {
            for (nodeDouble node : vector_of_doubles)
                if (node.index == index)
                    vector_of_doubles[node.vect_index].value = value;
        }

        void ch_value(std::string value, int index) {
            for (nodeString node : vector_of_strings)
                if (node.index == index)
                    vector_of_strings[node.vect_index].value = value;
        }

        void remove(int index) {
            for (nodeInt node : vector_of_ints)
                if (node.index == index)
                    vector_of_ints.erase((vector_of_ints.begin() + node.vect_index));

            for (nodeDouble node : vector_of_doubles)
                if (node.index == index)
                    vector_of_doubles.erase((vector_of_doubles.begin() + node.vect_index));

            for (nodeString node : vector_of_strings)
                if (node.index == index)
                    vector_of_strings.erase((vector_of_strings.begin() + node.vect_index));

            len = len - 1;
            indexes = indexes - 1;

            Dindexes(index);
        }

        void pop() {
            this->remove(indexes);
        }

        int get_len() const {
            return len;
        }

        friend std::ostream& operator<<(std::ostream& os,  const list& rhs);
        friend class list2D;
};

std::ostream& operator<<(std::ostream& os, const list& rhs) {
    rhs.log();
    return os;
}

#endif