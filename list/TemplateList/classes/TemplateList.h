#include <iostream>
#include <vector>

#include "./nodes/TemplateNode.h"

template<typename T> class templateList {
    private:
        int indexes = -1;
        int length = 0;

        std::vector<TempNode<T>> vect;

    public:
        
        templateList() = default;

        void push(T value) {
            TempNode<T> newNode { (indexes + 1), value };

            vect.push_back(newNode);
            indexes += 1;
            length += 1;
        }

        T get(int index) {
            return vect.at(index).value;
        }
};