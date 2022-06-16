#include <iostream>
#include <fstream>
#include <memory>
#include <vector>

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