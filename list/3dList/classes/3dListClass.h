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


        void log() {
            std::cout << "[ ";
            for (list2DNode TopNode : vector_of_2DLists) {
                std::cout << "[ ";
                for (int i = 0; i < TopNode.value.get_len(); i++) {
                    std::cout << "[ ";
                    for (int j = 0; j < TopNode.value.vector_of_lists.at(i).vector_of_ints.size(); j++) {
                        std::cout << TopNode.value.vector_of_lists.at(i).vector_of_ints.at(j).value << ", ";
                    }

                    for (int j = 0; j < TopNode.value.vector_of_lists.at(i).vector_of_doubles.size(); j++) {
                        std::cout << TopNode.value.vector_of_lists.at(i).vector_of_doubles.at(j).value << ", ";
                    }

                    for (int j = 0; j < TopNode.value.vector_of_lists.at(i).vector_of_strings.size(); j++) {
                        std::cout << TopNode.value.vector_of_lists.at(i).vector_of_strings.at(j).value << ", ";
                    }
                    std::cout << "], ";
                }
                std::cout << "], ";
            }
            std::cout << "]" << std::endl;
        }

        void ch_value(list2D new_value, int index) {
            for (list2DNode node : vector_of_2DLists) {
                if (node.index == index) {
                    vector_of_2DLists[node.vect_index].value = new_value;
                }
            }
        }
};