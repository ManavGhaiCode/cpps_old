#ifndef _LIST_h_
#define _LIST_H_

#include <iostream>
#include <vector>

#include "nodes.h"

using namespace std;

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

        void add(int value);
        void add(double value);
        void add(string value);
    
};

#endif