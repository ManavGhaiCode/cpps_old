#ifndef _2D_LIST_CLASS_H_
#define _2D_LIST_CLASS_H_

#include <iostream>
#include <vector>

#include "../../1dList.h"

#include <iostream>

class list2D {
    private:
        int len;
        int indexes;

        std::vector<list> vector_of_lists;

    public:
        void push(list li) {
            vector_of_lists.push_back(li);

            len = len + 1;
            indexes = indexes + 1;
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

                for (auto node : li.vector_of_chars)
                    std::cout << node.value << ", ";

                std::cout << "]";

                std::cout << ", ";
            }

            std::cout << "]" << std::endl;
        }
};

#endif