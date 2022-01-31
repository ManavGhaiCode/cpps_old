#ifndef _LIST_h_
#define _LIST_H_

#include <iostream>
#include <vector>
#include <string>

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

        int sat(int index, int type)
        {
            for (auto node : VECTOR_OF_INT)
                if (node.getIndex() == index)
                    return node.getValue();
            if (index > indexes)
                return 0;
        }

        double sat(int index, double type)
        {
            for (auto node : VECTOR_OF_DOUBLE)
                if (node.getIndex() == index)
                    return node.getValue();
            if (index > indexes)
                return 0.00;
        }

        string sat(int index, string type)
        {
            for (auto node : VECTOR_OF_STRING)
                if (node.getIndex() == index)
                    return node.getValue();
            if (index > indexes)
                return 0;
        }

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
            indexes = indexes + 1;
        }

        void add(double value)
        {
            nodeDouble newNode {value, indexes};

            VECTOR_OF_DOUBLE.push_back(newNode);
            indexes = indexes + 1;
        }

        void add(string value)
        {
            nodeStr newNode {value, indexes};

            VECTOR_OF_STRING.push_back(newNode);

            indexes = indexes + 1;
        }

        int at(int index, int type)
        {
            for (auto node : VECTOR_OF_INT)
                if (node.getIndex() == index)
                    return node.getValue();
            if (index > indexes)
                print("Cannot find a node.");
                return 0;
        }

        double at(int index, double type)
        {
            for (auto node : VECTOR_OF_DOUBLE)
                if (node.getIndex() == index)
                    return node.getValue();
            if (index > indexes)
                print("Cannot find a node.");
                return 0.00;
        }

        string at(int index, string type)
        {
            for (auto node : VECTOR_OF_STRING)
                if (node.getIndex() == index)
                    return node.getValue();
            if (index > indexes)
                print("Cannot find a node.");
                return "";
        }

        void log()
        {
            int in {0};
            print("[");
            for (auto node : VECTOR_OF_INT)
                if (this->sat(in, 0) != 0) 
                    if (in <= indexes) {
                        cout << "    " << node.getValue() << endl;

                        in = in + 1;
                    }


            for (auto node : VECTOR_OF_DOUBLE)
                if (this->sat(in, 0.00) != 0.00)
                    if (in <= indexes) {
                        cout << "    " << node.getValue() << endl;

                        in = in + 1;
                    }

            for (auto node : VECTOR_OF_STRING)
                if (this->sat(in, "") != "")
                    if (in <= indexes) {
                        cout << "    " << node.getValue() << endl;

                        in = in + 1;
                    }
            
            print("]");
        }

        void chValue(int index, int nval)
        {
            // if (!(index <= indexes)) 
            //     print("Error: No such index found");
            //     return;

            // for (nodeInt node : VECTOR_OF_INT) {
            //     if (node.getIndex() == index) {
            //         if (node.getType() == "int") {
            //             nodeInt ANode = node.chValue(nval);

            //             VECTOR_OF_INT.at(index) = ANode;
            //         } else {
            //             print("Error: nval is not of the same type as the same the node.");
            //         }
            //     }
            // }

            if (index > indexes) {
                print("Error: No such index found");
                return;
            } else {
                for (nodeInt node : VECTOR_OF_INT) {
                    if (node.getIndex() == index) {
                        nodeInt NNode = node.chValue(nval);

                        VECTOR_OF_INT[index].value = NNode.value;
                    }
                }
            }
        }
};

#endif