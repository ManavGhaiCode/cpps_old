#include <iostream>

template<typename T> class TempNode {
    public:
        int index;
        int vect_index;
        T value;

        TempNode(int index, int vect_index, T value) {
            this->index = index;
            this->value = value;
            this->vect_index = vect_index;
        }
};