#include <iostream>
#include <vector>

#include "./2dListNode.h"

class list3D {
    private:
        int indexes = -1;
        int length = 0;

        std::vector<list2DNode> vector_of_2DLists;

    public:
        list3D() {};
        ~list3D() = default;

        void push(list2D value) {
            list2DNode newNode {(indexes + 1), vector_of_2DLists.size(), value};

            vector_of_2DLists.push_back(newNode);

            indexes += 1;
            length += 1;
        }

        list2D at(int index) {
            for (list2DNode node : vector_of_2DLists) {
                if (node.index == index) {
                    return vector_of_2DLists[node.vect_index].value;
                }
            }
        }
};