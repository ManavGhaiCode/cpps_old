#include <iostream>
#include <string>

class nodeString {
    private:
        int index;
        int vect_index;

        std::string value;

    public:
        nodeString(int index, int vect_index, std::string value)
        {
            this->index = index;
            this->vect_index = vect_index;

            this->value = value;
        }
};