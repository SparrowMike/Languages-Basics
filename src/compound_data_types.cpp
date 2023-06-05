#include "../include/compound_data_types.h"

#include <iostream>
#include <vector>
#include <array>
#include <string>

/* Compound data types
    Arrays: Allow us to store and work with multiple variables of the same type.
    Pointers: Contain memory addresses, making indirect access to values possible, and they are fundamental to dynamic memory management.
    Enumerations: Provide a way for developers to define a type that has a few predefined values, increasing code clarity and making the code easier to maintain.
    Structures: Permit grouping of variables of mixed data types together under a single name.
    Classes: Are extensions of structures, and they not only hold data but also functions (methods).
*/  
void compound_data_types() {
    // Array: fixed-size sequence of elements of the same type
    std::array<int, 3> arr = {1, 2, 3};
    std::cout << "Array: ";
    for(int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;

    // Vector: dynamic-size sequence of elements of the same type
    std::vector<std::string> vec = {"Hello", "World"};
    std::cout << "Vector: ";
    for(const auto &str : vec) {
        std::cout << str << ' ';
    }
    std::cout << std::endl;

    // Pointer: holds memory address of another variable
    int num {10};
    int* p {&num};  // pointer to num
    std::cout << "Pointer: " << *p << std::endl;  // *p dereferences the pointer, i.e., gets the value that p points to

    // Enumeration: user-defined type with values that you specify
    enum Color {red, green, blue};
    Color my_color = blue;
    std::cout << "Enumeration: " << my_color << std::endl;

    // Structure: user-defined type that can hold different types of variables
    struct Point {
        int x;
        int y;
    };
    Point p1 = {10, 20};
    std::cout << "Structure: " << p1.x << ' ' << p1.y << std::endl;

    std::cout << "=========================" << std::endl;
}