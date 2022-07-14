#include <iostream>

template<typename T> class TempNode {
    public:
        int index;
        T value;

        TempNode(int index, T value) {
            this->index = index;
            this->value = value;
        }
};