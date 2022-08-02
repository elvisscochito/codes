#include <iostream>
using namespace std;

/**
 * @author Elviro Dominguez Soriano
 * @brief A ASCII Aa program in c++
 * @date Oct 17, 2021
 * @file ascii.cpp
 */

void asciiChar();
void asciiString();

void asciiChar(){
    char ch='\0';
    cout << "Enter a character: " << endl;
    cout << " > ";
    cin >> ch;
    cout << "The ASCII value of '" << ch << "' is " << int(ch) << endl;
}

void asciiString(){
    string str = "";
    cout << "Enter a string: " << endl;
    cout << " > ";
    cin >> str;

    for (int i = 0; i < str.size(); i++){
        cout << (int)str[i];
    }
}

int main(){
    cout << "- Program start - \n" << endl;
    // asciiChar();
    asciiString();
    cout << "\n - Program end -" << endl;
    return 0;
}
