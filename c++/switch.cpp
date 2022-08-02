#include <iostream>

/**
 * @author Elviro Dominguez Soriano
 * @brief A basic Switch program in c++
 * @date Nov 9, 2021
 * @file HelloWorld.cpp
 */

void switchFunc();

void switchFunc(){
    int option=0;
    std::cout << "Enter an option" << std::endl;
    std::cout << " > ";
    std::cin>>option;
    
    switch(option){
        case 1:
        std::cout << "Case 1 selected" << std::endl;
        std::cout << "Process completed successfully" << std::endl;
        break;

        case 2:
        std::cout << "Case 2 selected" << std::endl;
        std::cout << "Process completed successfully" << std::endl;
        break;

        case 3:
        std::cout << "Case 3 selected" << std::endl;
        std::cout << "Process completed successfully" << std::endl;
        break;

        case 4:
        std::cout << "Case 4 selected" << std::endl;
        std::cout << "Process completed successfully" << std::endl;
        break;

        case 5:
        std::cout << "Case 5 selected" << std::endl;
        std::cout << "Process completed successfully" << std::endl;
        break;

        default:
        std::cerr << "Invalid option, try again" << std::endl;
        break;
    }
}

int main(){
    std::cout << "|=========================|" << std::endl;
    std::cout << "- Program start - \n" << std::endl;
    switchFunc();
    std::cout << "\n - Program end -";
    std::cout << "|=========================|" << std::endl;
    return 0;
}
