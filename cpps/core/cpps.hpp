#ifndef _CPPS_H_
#define _CPPS_H_

#include <iostream>
#include <fstream>
#include <memory>
#include <vector>
#include <functional>
#include <string>
#include <bits/stdc++.h>

#include "../../chars/chars.h"

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

    class File {
        private:
            std::ifstream file_in;
            std::ofstream file_out;

        public:
            File() {};

            File(std::string file) {
                open(file);
            }

            File(char file[]) {
                open(file);
            }

            ~File() {
                file_in.close();
                file_out.close();
            }

            void open(std::string file) {
                file_in.open(file);
                file_out.open(file, ios::app);

                if (!(file_in.is_open() and file_out.is_open())) {
                    std::cerr << "unable to open or create file..." << std::endl;
                    std::exit(1);
                }
            }

            void open(char file[]) {
                std::string file_name = brew(file, (sizeof(file) / sizeof(int)));

                file_in.open(file);
                file_out.open(file, ios::app);

                if (!(file_in.is_open() and file_out.is_open())) {
                    std::cerr << "unable to open or create file..." << std::endl;
                    std::exit(1);
                }
            }

            void close() {
                file_in.close();
                file_out.close();
            }

            void shift(std::string new_file) {
                close();
                open(new_file);
            }

            void shift(char new_file[]) {
                close();
                open(new_file);
            }

            std::string read() {
                char *read_out;

                while ( file_in ) {
                    read_out += file_in.get();
                }
            
                return brew(read_out, sizeof(read_out));
            }

            void write(char Data[]) {
                file_out.write(Data, sizeof(Data));
            }
    };
};

#endif