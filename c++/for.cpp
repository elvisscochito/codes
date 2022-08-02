#include <iostream>

/**
 * @author Elviro Dominguez Soriano
 * @brief A basic HelloWorld program in c++
 * @date Oct 17, 2021
 * @file HelloWorld.cpp
 */

int main(){
    std::cout << "|=========================|" << std::endl;
    std::cout << "::Program start::\n" << std::endl;
    for (int i = 0; i < 10; i++){
        std::cout << i << std::endl;
    }
    std::cout << "::Program end::";
    std::cout << "|=========================|" << std::endl;
    return 0;
}
