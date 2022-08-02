#include <iostream>

/**
 * @author Elviro Dominguez Soriano
 * @brief A basic Data Types program in c++
 * @date Oct 17, 2021
 * @file HelloWorld.cpp
 */

void primary();

void primary(){
    int intNum = 0;
    char charText = 'Aa';
    bool bool1 = true, bool2 = false;
    float floatNum = 1.234567; // float for consistency, store 7 digits
    double doubleNum = 1.234567890123456; // double for precesing, store 15 digits
    long double longDoubleNum = 1.2345;
    std::string stringText = "Aa"; //Object
    std::cout << "int: " << intNum << std::endl;
    std::cout << "char: " << charText << std::endl;
    std::cout << "bool: " << bool1 << " " << bool2 << std::endl;
    std::cout << "double: " << floatNum << std::endl;
    std::cout << "double: " << doubleNum << std::endl;
    std::cout << "long double: " << longDoubleNum << std::endl;
    std::cout << "string: " << stringText << std::endl;
}

int main(){
    std::cout << "|=========================|" << std::endl;
    std::cout << "- Program start - \n" << std::endl;
    std::cout.precision(16);
    primary();
    std::cout << "\n - Program end -";
    std::cout << "|=========================|" << std::endl;
    return 0;
}
