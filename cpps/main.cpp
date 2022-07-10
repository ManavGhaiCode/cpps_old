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

    auto my_file = fileSystem::get_file("file");
    std::string line;

    while (std::getline(std::get<0>(my_file), line)) {
        std::cout << line << std::endl;
    }

    return 0;
}