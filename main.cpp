#include <iostream>
#include <fstream> 
#include <string>
#include <array>
#include <vector>
#include <stdexcept> // For std::runtime_error

/* Primitive data types:
    Integer types (int, short, long, long long)
    Character types (char)
    Floating-point types (float, double)
    Boolean type (bool)
*/
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

void control_flow() {
    int x {10};

    // 1. If-else Statement:
    if (x > 10) {
        std::cout << "x is greater than 10." << std::endl;
    } else if (x < 10) {
        std::cout << "x is less than 10." << std::endl;
    } else {
        std::cout << "x is equal to 10." << std::endl;
    }

    // 2. For loop:
    std::cout << "Counting up with a for loop: ";
    for(int i = 0; i <= x; ++i) {
        if (i == 2) {
            std::cout << "skip" << " ";
            continue;
        }
        if (i == 8) {
            std::cout << "break early" << " ";
            break;
        }
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // 3. While loop:
    std::cout << "Counting down with a while loop: ";
    while (x > 0) {
        std::cout << x << " ";
        --x;
    }
    std::cout << std::endl;

    // 4. Do-while loop:
    std::cout << "Do-while loop runs at least once, let's add 5 to x: ";
    do {
        x += 5;
        std::cout << x << " ";
    } while (x < 20);
    std::cout << std::endl;

    // 5. Switch statement:
    std::cout << "Using a switch statement to handle values of x: ";
    switch(x) {
        case 20:
            std::cout << "x is 20." << std::endl;
            break;
        case 25:
            std::cout << "x is 25." << std::endl;
            break;
        default:
            std::cout << "x is not 20 or 25, x is: " << x << std::endl;
    }

    // 6. Exceptions


    //? ------- Define a lambda function for division
    auto divide = [](double numerator, double denominator) {
        if(denominator == 0) {
            throw std::runtime_error("Divide by zero error");
        }
        return numerator / denominator;
    };

    double numerator{10.0};
    double denominator{0.0};

    try
    {
        double result = divide(numerator, denominator);
        std::cout << "The result is: " << result << std::endl;
    }
    catch (const std::runtime_error &e)
    {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }
}

void streams() {
    //? std::cout is used to output text to the console.
    //? std::cin is used to read input from the console.
    //? std::ofstream is used to write to a file.
    //? std::ifstream is used to read from a file.

    // 1. Console Output (cout)

    // 2. Console Input (cin)
    std::string name;
    std::cout << "Please enter your name: ";
    std::cin >> name;

    // 3. File Output (ofstream)
    std::ofstream outfile("test.txt");
    if(outfile.is_open()) {
        outfile << "Hello, " << name << "!\n";
        outfile.close();
    } else {
        std::cout << "Unable to open file for writing.";
    }

    // 4. File Input (ifstream)
    std::ifstream infile("test.txt");
    if(infile.is_open()) {
        std::string line;
        while(std::getline(infile, line)) {
            std::cout << line << '\n';
        }
        infile.close();
    } else {
        std::cout << "Unable to open file for reading.";
    }

    // Error stream: std::cerr
    // Useful for showing error messages.
    std::cerr << "This is an error message." << std::endl;

    // Log stream: std::clog
    // Useful for writing log messages.
    std::clog << "This is a log message." << std::endl;
}

int main() {
    // primitive_data_types();
    // compound_data_types();
    // control_flow();
    // streams();

    return 0;
}
