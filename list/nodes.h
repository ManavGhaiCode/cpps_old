#include <iostream>
#include <string>

#include "../printExtion/print.h"

class nodeInt
{
    private:

        int index;
        int value;

    public:

        nodeInt(int value, int index)
        {
            this->index = index;
            this->value = value;
        }

        void chValue(int nvalue)
        {
            this->value = nvalue;
        }

        int getValue()
        {
            return this->value;
        }

};

class nodeStr
{
    private:

        int index;
        string value;
        int len {0};

    public:

        nodeStr(string value, int index)
        {
            this->index = index;
            this->value = value;
            this->len = value.size();
        }

        void chValue(string nvalue)
        {
            this->value = nvalue;
            this->len = nvalue.size();
        }

        string getValue()
        {
            return this->value;
        }

        int size()
        {
            return this->len;
        }

};

class nodeDouble
{
    private:

        int index;
        double value; 

    public:

        nodeDouble(double value, int index)
        {
            this->index = index;
            this->value = value;
        }

        void chValue(double nvalue)
        {
            this->value = nvalue;
        }

        double getValue()
        {
            return this->value;
        }

};