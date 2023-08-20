#include "../include/streams.h"

#include <iostream>
#include <string>
#include <fstream> 


void streams() {
    //? std::cout is used to output text to the console.
    //? std::cin is used to read input from the console.
    //? std::ofstream is used to write to a file.
    //? std::ifstream is used to read from a file.

    // 1. Console Output (cout)

    // 2. Console Input (cin)
    std::string name;
    int age;

    std::cout << "Please enter your name, followed by age: " << std::endl;

    // std::cin >> name;
    std::getline(std::cin, name); // ? will allow spaces

    std::cin >> age;
    // std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Ignore the newline left over from cin

    // 3. File Output (ofstream)
    std::ofstream outfile("test.txt");
    if(outfile.is_open()) {
        outfile << "Hello " << name << " are you really " << age << "?!\n";
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