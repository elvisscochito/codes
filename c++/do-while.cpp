#include <iostream>

/**
 * @author Elviro Dominguez Soriano
 * @brief A basic Do-While program in c++
 * @date Oct 17, 2021
 * @file HelloWorld.cpp
 */

int main(){
    std::string password, confirmation;
    std::cout << "Program start" << std::endl;
    do {
        std::cout << "Enter a password:" << std::endl;
        std::cout << " > ";
        std::cin >> password;
        std::cout << "Confirm password:" << std::endl;
        std::cout << " > ";
        std::cin >> confirmation;
        if (password != confirmation){
            std::cout << "Error, try again" << std::endl;
        } else {
            std::cout << "Your password is correct" << std::endl;
        }
    } while (password != confirmation);
    std::cout << "Program end" << std::endl;
    return 0;
}
