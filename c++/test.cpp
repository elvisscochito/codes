#include <iostream>
using namespace std;

/**
 * @author Elviro Dominguez Soriano
 * @brief A basic HelloWorld program in c++
 * @date Oct 17, 2021
 * @file HelloWorld.cpp
 */

int main(){
    int x = 0;
    int decrement = 0;
    decrement = --x;
    cout << decrement;
    std::cout << std::endl;

    int cont2 = 0;
    for (int i = 10; i > 0; i--){
        std::cout << "postDecrement: " << i << std::endl;
        cont2--;
    }
    std::cout << "postDecrement cont: " << cont2 << std::endl;
    return 0;
}
