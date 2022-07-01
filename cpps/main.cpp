#include <iostream>
#include <vector>
#include <string>

#include "./index.hpp"

int main() {
    fileSystem::cd("/home/manav/cpps");

    std::vector<std::string> output = fileSystem::ls();

    std::cout << "[ ";
    for (std::string str : output)
    {
        std::cout << str << ", ";
    }
    std::cout << "]" << std::endl;

    std::cout << fileSystem::get_cwd() << std::endl;

    return 0;
}