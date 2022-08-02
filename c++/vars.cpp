#include <iostream>

/**
 * @author Elviro Dominguez Soriano
 * @brief A basic Vars program in c++
 * @date Oct 17, 2021
 * @file vars.cpp
 */

const float G = 9.81; //Global const vars
int var = 0; //Global vars
void localVars();
void globalVars();
void globalConstVars();

/**
 * @note local vars only can use inside the function
 */
void localVars(){
    int i = 0;
    std::cout <<  "localVars(): " << i << std::endl;
}

/**
 * @note global vars can use everywhere in the program file
 */
void globalVars(){
    var = 8;
    std::cout << "globalVars(): " << var << std::endl;
}

/**
 * @note global const  vars can use everywhere in the program too, but they cannot be modified
 */
void globalConstVars(){
    std::cout << "globalConstVar(): " << G << std::endl;
}

int main(){
    int var=0;
    std::cout << "|*=========================*|" << std::endl;
    std::cout << "-*- Program start -*- \n" << std::endl;
    localVars();
    globalVars();
    globalConstVars();
    std::cout << "\n -*- Program end -*-" << std::endl;
    std::cout << "|*=========================*|" << std::endl;
    return 0;
}
