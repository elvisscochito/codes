#include <iostream>

/**
 * @author Elviro Dominguez Soriano
 * @brief A basic Keywords program in c++
 * @date Oct 17, 2021
 * @file HelloWorld.cpp
 */
void continueFunc();
void breakFunc();
int returnFunc();
void cerrFunc();
void logFunc();
void setwFunc(); //#include <iomanip>
void constFunc();
void goodFunc();
void badFunc();
void failFunc();
void eofFunc();
void trueFunc();
void falseFunc();
void sizeofFunc();
void externFunc();

/**
 * @note continue skip/jump to next iteration
 */
void continueFunc(){
    for (int i = 0; i < 10; i++){
        continue;
        std::cout << i << std::endl;
    }
}

/**
 * @note break exit/end the loop
 */
void breakFunc(){
    for (int i = 0; i < 10; i++){
        std::cout << i << std::endl;
        break;
    }
}

void sizeofFunc(){
    std::cout << "sizeFunc(): " << sizeof(float) << std::endl;
    std::cout << "sizeFunc(): " << sizeof(double) << std::endl;
    std::cout << "sizeFunc(): " << sizeof(long double) << std::endl;
}

/**
 * @note return returns a value
 */
int returnFunc(){
    return 1 + 2;
}

int main(){
    std::cout << "|=========================|" << std::endl;
    std::cout << "- Program start - \n" << std::endl;
    continueFunc();
    breakFunc();
    int aux = returnFunc();
    std::cout << aux << std::endl;
    sizeofFunc();
    std::cout << "\n - Program end -" << std::endl;
    std::cout << "|=========================|" << std::endl;
    return 0;
}
