#ifndef PRINT_OVERLOADS_H
#define PRINT_OVERLOADS_H

#include <vector>
#include <string>

void print(int a);
void print(double a);
void print(const std::string& str);
void print(bool a);
void print(const std::vector<int>& vec);
void print(const std::vector<double>& vec);
void print(const std::vector<std::string>& vec);

#endif
