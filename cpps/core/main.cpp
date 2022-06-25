#include <iostream>
#include "./cpps.hpp"

int main() {
    cpps::io::Int.showbase();
    cpps::io::Int.hex();

    std::cout << 255 << std::endl;

    cpps::io::Int.oct();

    std::cout << 255 << std::endl;

    cpps::io::Int.dec();

    std::cout << 255 << std::endl;

    cpps::io::Int.stop_showbase();    
    cpps::io::Int.hex();

    std::cout << 255 << std::endl;

    cpps::io::Int.dec();
    cpps::io::Int.precision(8);
    cpps::io::Int.showpoints();

    std::cout << 255.097 << std::endl;

    cpps::io::Int.stop_fix();

    std::cout << 255.097 << std::endl;

    cpps::io::Int.reset();
    cpps::io::Int.hex();

    std::cout << 255 << std::endl;
    std::cout << 255.097 << std::endl;

    cpps::io::Int.CPPReset();
    cpps::io::Int.hex();

    std::cout << 255 << std::endl;
    std::cout << 255.097 << std::endl;

    cpps::io::Bool.strform();

    std::cout << (10 == 20) << std::endl;

    cpps::io::Bool.CPPReset();

    std::cout << (10 == 20) << std::endl;

    cpps::io::Bool.reset();

    std::cout << (10 == 20) << std::endl;

    cpps::io::Gen.setw(10);
    cpps::io::Gen.fill('*');

    std::cout << "Hello" << std::endl;

    cpps::io::Gen.reset();
    cpps::io::Gen.setw(10);

    std::cout << "Hello" << std::endl;

    cpps::io::Gen.CPPReset();
    cpps::io::Gen.setw(10);

    std::cout << "Hello" << std::endl;

    return 0;
}