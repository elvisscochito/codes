#include <iostream>

/**
 * @author Elviro Dominguez Soriano
 * @brief A basic Menu program in c++
 * @date Oct 17, 2021
 * @file HelloWorld.cpp
 */

static void menu();

static void menu(){
    std::cout << "+---------------------+" << std::endl;
    std::cout << "|      .:Main:.       |" << std::endl;
    std::cout << "| - [1] Option Insert |" << std::endl;
    std::cout << "| - [2] Option Search |" << std::endl;
    std::cout << "| - [3] Option Delete |" << std::endl;
    std::cout << "| - [4] Option Print  |" << std::endl;
    std::cout << "| - [5] Option Exit   |" << std::endl;
    std::cout << "+---------------------+" << std::endl;
}

int main(){
    std::cout << "|=========================|" << std::endl;
    std::cout << "- Program start -" << std::endl;
    menu();
    std::cout << "- Program end -" << std::endl;
    std::cout << "|=========================|" << std::endl;
    return 0;
}
