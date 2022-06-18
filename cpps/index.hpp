#include <iostream>
#include <fstream>
#include <memory>
#include <vector>

#include "./global/global.hpp"

namespace cpps {
    template<typename T1, typename T2> struct pair
    {
        T1 value1;
        T2 value2;
    };

    template<typename T> class Itom {
        private:
            std::string name;
            T value;

        public:
            Itom(std::string name, T value) {
                this->name = name;
                this->value = value;
            }

            ~Itom() {};

            std::string get_name() {
                return this->name;
            }

            T get_value() {
                return this->value;
            }
    };

    namespace io {};
};

// std::time_t t = std::time(0);   // get time now
// std::tm* now = std::localtime(&t);