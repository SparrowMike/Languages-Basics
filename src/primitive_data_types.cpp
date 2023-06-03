#include <iostream>

#include "../include/primitive_data_types.h"

/* Primitive data types:
    Integer types (int, short, long, long long)
    Character types (char)
    Floating-point types (float, double)
    Boolean type (bool)
*/
void primitive_data_types() {
    bool is_true = false;

    // An integer can hold whole numbers (no decimal points).
    int num = 11;

    // A float can hold a number with decimal points.
    float decimal = 3.14; 

    // A double is similar to a float but has more precision.
    double precise_decimal = 3.141592653589793;

    // A char can hold a single character.
    char letter = 'A';

    // A string can hold a sequence of characters.
    const std::string message {"Hello, World!"}; //! ------ curly braces - newer C++11 syntax - considered safer

    // std::endl is used to create a new line after each variable's value.
    std::cout << "Boolean: " << is_true << std::endl;
    std::cout << "Integer: " << num << std::endl;
    std::cout << "Float: " << decimal << std::endl;
    std::cout << "Double: " << precise_decimal << std::endl;
    std::cout << "Character: " << letter << std::endl;
    std::cout << "String: " << message << std::endl;
    std::cout << "=========================" << std::endl;
}
