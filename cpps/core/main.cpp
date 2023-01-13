#include <iostream>

#include "./filesystem/linux/filesystem.hpp"

int main() {
    fileSystem::touch("hi.txt");

    return 0;
}