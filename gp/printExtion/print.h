#ifndef _PRINT_H_
#define _PRINT_H_

#include <iostream>
#include <functional>
#include <string>
#include <vector>

#include "../../vars.h"

template<typename T> void print(T obj) {
    std::cout << obj << std::endl;
}

template<typename T> void print(T obj, std::function<void(T)> func) {
    func(obj);
}

template<typename T> void print(std::vector<T> obj) {
    std::cout << "[ ";
    for (T childObj : obj) {
        std::cout << childObj << ", ";
    }
    std::cout << " ]" << std::endl;
}

template<typename T> void print(std::vector<T> obj, std::function<void(T)> func) {
    std::cout << "[ ";
    for (T childObj : obj) {
        func(childObj);
    }
    std::cout << " ]" << std::endl;
}

template<typename T> void print(T obj[], int size) {
    std::cout << "[ ";
    for (int i = 0; i < size; i++) {
        std::cout << obj[i] << ", ";
    }
    std::cout << "]" << std::endl;
}

template<typename T> void print(T obj[], int size, std::function<void(T)> func) {
    std::cout << "[ ";
    for (int i = 0; i < size; i++) {
        func(obj[i]);
    }
    std::cout << " ]" << std::endl;
}

#endif