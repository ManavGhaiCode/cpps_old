#include <iostream>

class nodeDouble {
    private:
        int index;
        int vect_index;

        double value;

    public:
        nodeDouble(int index, int vect_index, double value) {
            this->index = index;
            this->vect_index = vect_index;

            this->value = value;
        }

    friend class list;
};