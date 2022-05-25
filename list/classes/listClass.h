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
        std::vector<nodeChar> vector_of_chars;


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

        void push(char val) {
            nodeChar new_node { ( indexes + 1 ), vector_of_chars.size(), val };
            vector_of_chars.push_back(new_node);

            indexes = indexes + 1;
            len = len + 1;
            
            return;
        }

        int at(int index, int type) {
            if (index <= indexes) {
                for (int i = 0; i < vector_of_ints.size(); i = i + 1) {
                    if (vector_of_ints.at(i).index = index) {
                        return vector_of_ints.at(i).value;
                    }
                }
            } else {
                std::cout << "No value at index: " << index << " was found" << std::endl;
                return -0.00;
            }
        }

        double at(int index, double type) {
            if (index <= indexes) {
                for (int i = 0; i < vector_of_doubles.size(); i = i + 1) {
                    if (vector_of_doubles.at(i).index = index) {
                        return vector_of_doubles.at(i).value;
                    }
                }
            } else {
                std::cout << "No value at index: " << index << " was found" << std::endl;
                return -0.00;
            }
        }

        std::string at(int index, std::string type) {
            if (index <= indexes) {
                for (int i = 0; i < vector_of_strings.size(); i = i + 1) {
                    if (vector_of_strings.at(i).index = index) {
                        return vector_of_strings.at(i).value;
                    }
                }
            } else {
                std::cout << "No value at index: " << index << " was found" << std::endl;
                return "-0.00";
            }
        }
        
        char at(int index, char type) {
            if (index <= indexes) {
                for (int i = 0; i < vector_of_chars.size(); i = i + 1) {
                    if (vector_of_chars.at(i).index = index) {
                        return vector_of_chars.at(i).value;
                    }
                }
            } else {
                std::cout << "No value at index: " << index << " was found" << std::endl;
                return '\0';
            }
        }

        void log() {
            std::cout << "[ ";

            for (auto node : vector_of_ints)
                std::cout << node.value << ", ";

            for (auto node : vector_of_doubles)
                std::cout << node.value << ", ";

            for (auto node : vector_of_strings)
                std::cout << node.value << ", ";

            for (auto node : vector_of_chars)
                std::cout << node.value << ", ";

            std::cout << "]" << std::endl;
        }
};

#endif