#ifndef _2D_LIST_CLASS_H_
#define _2D_LIST_CLASS_H_

#include <iostream>
#include <vector>

#include "../1dList.h"

#include <iostream>

class list2D {
    private:
        int len = 0;
        int indexes = -1;

        std::vector<list> vector_of_lists;

    public:
        list2D() {};
        ~list2D() = default;

        void push(list li) {
            vector_of_lists.push_back(li);

            len = len + 1;
            indexes = indexes + 1;
        }

        list at(int index) {
            return vector_of_lists[index];
        }

        void log() {
            std::cout << "[ ";

            for (list li : vector_of_lists) {
                std::cout << "[ ";

                for (auto node : li.vector_of_ints)
                    std::cout << node.value << ", ";

                for (auto node : li.vector_of_doubles)
                    std::cout << node.value << ", ";

                for (auto node : li.vector_of_strings)
                    std::cout << node.value << ", ";

                std::cout << "]";

                std::cout << ", ";
            }

            std::cout << "]" << std::endl;
        }

        void remove(int index) {
            int i = 0;

            for (list li : vector_of_lists) {
                if (i == index) {
                    vector_of_lists.erase((vector_of_lists.begin() + i));
                }

                i = i + 1;
            }

            len = len - 1;
            indexes = indexes - 1;
        }

        void pop() {
            this->remove(indexes);
        }

        int get_len() {
            return len;
        }

        friend class list3D;
};

#endif