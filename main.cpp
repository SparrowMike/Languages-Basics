// Include the iostream library to enable input/output streams, like std::cout.
#include <iostream>

// Include the string library to enable using the string type.
#include <string>

// The main function is where the program starts executing.
int main() {
    //? ======= Fundamental Data Types in C++ =======
    bool is_true = true;

    // An integer can hold whole numbers (no decimal points).
    int num = 10;

    // A float can hold a number with decimal points.
    float decimal = 3.14;

    // A double is similar to a float but has more precision.
    double precise_decimal = 3.141592653589793;

    // A char can hold a single character.
    char letter = 'A';

    // A string can hold a sequence of characters.
    std::string message = "Hello, World!";

    // std::endl is used to create a new line after each variable's value.
    std::cout << "Boolean: " << is_true << std::endl;
    std::cout << "Integer: " << num << std::endl;
    std::cout << "Float: " << decimal << std::endl;
    std::cout << "Double: " << precise_decimal << std::endl;
    std::cout << "Character: " << letter << std::endl;
    std::cout << "String: " << message << std::endl;

    // The return statement ends the program. 
    // Returning 0 indicates that the program has finished successfully.
    return 0;
}
