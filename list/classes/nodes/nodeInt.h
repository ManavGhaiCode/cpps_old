#include <iostream>

class nodeInt {
    private:
        int index;
        int vect_index;

        int value;

    public:
        nodeInt(int index, int vect_index, int value) {
            this->index = index;
            this->vect_index = vect_index;

            this->value = value;
        }

    friend class list;
    friend class list2D;
};