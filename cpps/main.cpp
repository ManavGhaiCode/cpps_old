#include <iostream>
#include <vector>
#include "./index.hpp"

int main() {
    std::vector<int> vect {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr[9] {1, 2, 3, 4, 5, 6, 7, 8, 9};

    cpps::io::out(vect);
    cpps::io::out(arr, 9);

    return 0;
}