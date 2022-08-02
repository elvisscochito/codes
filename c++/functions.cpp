#include <iostream>

/**
 * @author Elviro Dominguez Soriano
 * @brief A basic Functions program in c++
 * @date Oct 17, 2021
 * @file functions.cpp
 */

/**
 * @brief functions helps to reuse code (prevent duplication) and keep it organized
 * @note Function prototype/declaration
 */
void noParameterizeFunc();
void parameterizeFunc(int);

void noParameterizeFunc(){
    std::cout << "This is a non parameterize function" << std::endl;
}

/**
 * @note The parameter could be whatever data type, it's  a copy of the original data/input
 * @param param
 */
void parameterizeFunc(int param){
    std::cout << "This is a parameterize function, your parameter is: " << param << std::endl;
}

int main(){
    std::cout << "|=========================|" << std::endl;
    std::cout << "- Program start - \n" << std::endl;
    noParameterizeFunc();
    parameterizeFunc(0);
    std::cout << "\n - Program end -" << std::endl;
    std::cout << "|=========================|" << std::endl;
    return 0;
}
