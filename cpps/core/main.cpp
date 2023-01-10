#include <iostream>

#include "./cpps.hpp"

int main() {
    cpps::File f;
    f.open("./test1.txt");

    f.write(
        "Hi, I was made using the function open(); !\n My name is test1...\n I like chess!"
    );

    std::string fContext = f.read();

    std::cout << fContext << std::endl;

    return 0;
}