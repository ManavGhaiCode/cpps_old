#ifndef _CPPS_H_
#define _CPPS_H_

#include <iostream>
#include <fstream>
#include <memory>
#include <vector>
#include <functional>

#include "./iomnip/iomnipTypes.hpp"

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

    namespace io {
        IntType Int;
        BoolType Bool;
        GenType Gen;

        template<typename T> void out(T obj) {
            std::cout << obj << std::endl;
        }

        template<typename T> void out(T obj, std::function<void(T)> func) {
            func(obj);
        }

        template<typename T> void out(std::vector<T> obj) {
            std::cout << "[ ";
            for (T childObj : obj) {
                std::cout << childObj << ", ";
            }
            std::cout << " ]" << std::endl;
        }

        template<typename T> void out(std::vector<T> obj, std::function<void(T)> func) {
            std::cout << "[ ";
            for (T childObj : obj) {
                func(childObj);
            }
            std::cout << " ]" << std::endl;
        }

        template<typename T> void out(T obj[], int size) {
            std::cout << "[ ";
            for (int i = 0; i < size; i++) {
                std::cout << obj[i] << ", ";
            }
            std::cout << "]" << std::endl;
        }

        template<typename T> void out(T obj[], int size, std::function<void(T)> func) {
            std::cout << "[ ";
            for (int i = 0; i < size; i++) {
                func(obj[i]);
            }
            std::cout << " ]" << std::endl;
        }
    };
};

#endif