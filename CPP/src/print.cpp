#include "../include/print.h"

#include <iostream>

void print(int a) {
    std::cout << "Printing an integer: " << a << std::endl;
}

void print(double a) {
    std::cout << "Printing a double: " << a << std::endl;
}

void print(const std::string& str) {
    std::cout << "Printing a string: " << str << std::endl;
}

void print(const char* str) {
    std::string s(str);
    print(s);
}

void print(bool a) {
    std::cout << "Printing a boolean: " << (a ? "true" : "false") << std::endl;
}

void print(const std::vector<int>& vec) {
    std::cout << "Printing a vector of integers: ";
    for(int i : vec) {
        std::cout << i << ' ';
    }
    std::cout << std::endl;
}

void print(const std::vector<double>& vec) {
    std::cout << "Printing a vector of doubles: ";
    for(double d : vec) {
        std::cout << d << ' ';
    }
    std::cout << std::endl;
}

void print(const std::vector<std::string>& vec) {
    std::cout << "Printing a vector of strings: ";
    for(const auto& str : vec) {
        std::cout << str << ' ';
    }
    std::cout << std::endl;
}