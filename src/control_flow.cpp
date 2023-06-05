#include <iostream>
// #include <stdexcept>

#include "../include/control_flow.h"

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