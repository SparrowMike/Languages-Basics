#include <iostream>
#include <string>
#include <array>
#include <vector>

void primitive_data_types() {
    bool is_true = false;

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
    std::cout << "=========================" << std::endl;
}

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
    int num = 10;
    int* p = &num;  // pointer to num
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

int main() {
    primitive_data_types();
    compound_data_types();
    return 0;
}
