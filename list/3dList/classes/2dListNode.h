#include <iostream>
#include "../../2dList/2dList.h"

class list2DNode {
    public:
        int index;
        int vect_index;
        list2D value;

        list2DNode(int index, int vect_index, list2D value) {
            this->index = index;
            this->vect_index = vect_index;
            this->value = value;
        };

        ~list2DNode() = default;

    friend class list3D;
};