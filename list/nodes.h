#include <iostream>
#include <string>

using std::string;

class nodeInt
{
    private:

        int index;
        int value;

    public:

        string getType()
        {
            return "int";
        }

        nodeInt(int value, int index)
        {
            this->index = index;
            this->value = value;
        }

        nodeInt chValue(int nvalue)
        {
            this->value = nvalue;
            return *this;
        }

        int getValue()
        {
            return this->value;
        }

        int getIndex()
        {
            return this->index;
        }

        nodeInt &operator=(const nodeInt &rsh)
        {
            if (this == &rsh)
                return *this;

            value = 0;
            int* nval {nullptr};

            *nval = rsh.value; 

            this->chValue(*nval);
            return *this;
        }

    friend class list;
};

class nodeDouble
{
    private:

        int index;
        double value; 

        string getType()
        {
            return "double";
        }

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

        int getIndex()
        {
            return this->index;
        }

    friend class list;
};

class nodeStr
{
    private:

        int index;
        string value;
        int len {0};

        string getType()
        {
            return "str";
        }

    public:

        nodeStr(string value, int index)
        {
            this->index = index;
            this->value = value;
            this->len = value.size();
        }

        nodeStr chValue(string nvalue)
        {
            this->value = nvalue;
            this->len = nvalue.size();
            return *this;
        }

        string getValue()
        {
            return this->value;
        }

        int size()
        {
            return this->len;
        }

        int getIndex()
        {
            return this->index;
        }
                
        nodeStr &operator=(const nodeStr &rsh)
        {
            if (this == &rsh)
                return *this;

            value = "";
            string* nval {nullptr};

            *nval = rsh.value; 

            this->chValue(*nval);
            return *this;
        }

    friend class list;
};
