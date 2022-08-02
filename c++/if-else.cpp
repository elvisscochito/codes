#include <iostream>
using namespace std;

/**
 * @author Elviro Dominguez Soriano
 * @brief A basic HelloWorld program in c++
 * @date Oct 17, 2021
 * @file HelloWorld.cpp
 */

void ifElse();

void ifElse(){
    int var = 8;
    cout << "Enter a number: " << endl;
    cout << " > ";

    if (var < 0) {
        cout << "Number '" << var << "' is negative" << std::endl;
    } else if (var > 0) {
        cout << "Number: '" << var << "' is positive" << std::endl;
    } else {
        cout << "Number: '" << var << "' is invalid" << std::endl;
    }
}

int main(){
    std::cout << "|=========================|" << std::endl;
    cout << "- Program start - \n" << endl;
    ifElse();
    cout << "\n - Program end -" << endl;
    std::cout << "|=========================|" << std::endl;
    return 0;
}
