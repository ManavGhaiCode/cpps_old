#ifndef _LIST_h_
#define _LIST_H_

#include <iostream>
#include <vector>

#include "nodes.h"
#include "../printExtion/print.h"

using std::vector;
using std::string;

class list
{
    private:
        
        vector<nodeInt> VECTOR_OF_INT;
        vector<nodeStr> VECTOR_OF_STRING;
        vector<nodeDouble> VECTOR_OF_DOUBLE;

        int len {0};
        int indexes {0};

    public:

        list()
        {
        };

        list(int value)
        {
            add(value);
        };

        void add(int value)
        {
            nodeInt newNode {value, indexes};

            VECTOR_OF_INT.push_back(newNode);
        }

        void add(double value)
        {
            nodeDouble newNode {value, indexes};

            VECTOR_OF_DOUBLE.push_back(newNode);
        }

        void add(string value)
        {
         nodeStr newNode {value, indexes};

            VECTOR_OF_STRING.push_back(newNode);
        }

        int at(int index, int type)
        {
            for (auto node : VECTOR_OF_INT)
                if (node.getIndex() == index)
                    return node.getValue();
    
            print("Cannot find a node at ");
            return 0;
        }

        double at(int index, double type)
        {
            for (auto node : VECTOR_OF_DOUBLE)
                if (node.getIndex() == index)
                    return node.getValue();

            

            print("Cannot find a node at ");
            return 0.00;
        }

        string at(int index, string type)
        {
            for (auto node : VECTOR_OF_STRING)
                if (node.getIndex() == index)
                    return node.getValue();
    
            print("Cannot find a node at ");
            return "";
        }
    
};

#endif