#include <iostream>

/**
 * @author Elviro Dominguez Soriano
 * @brief A basic While program in c++
 * @date Nov 8, 2021
 * @file While.cpp
 */
void whileFunc();

void whileFunc(){
    int var = 0;
    std::cout << "What's your age?" << std::endl;
    std::cin >> var;
    while(var!=0){
        std::cout << "You're live" << std::endl;
        var++;
    }
}

int main(){
    std::cout << "|=========================|" << std::endl;
    std::cout << "- Program start - \n" << std::endl;
    whileFunc();
    std::cout << "\n - Program end -" << std::endl;
    std::cout << "|=========================|" << std::endl;
    return 0;
}
