#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

/**
 * @author Elviro Dominguez Soriano
 * @brief A basic String Functions program in c++
 * @date Oct 17, 2021
 * @file strings-funcs.cpp
 */
std::string str = "";
char ch= '\0';
void appendFunc(); //#include <string>
void assignFunc(); //#include <string>
void findFunc();
void lengthFunc();
void sizeFunc();
void strlenFunc();
void toupperFunc();
void tolowerFunc();
void reverseFunc(); //#include <algorithm>
void substrFunc();
void insertFunc();
void swapFunc();
void stoiFunc();

void appendFunc(){
    std::string str1 = "str1";
    std::string  str2 = "str2";
    std::string  str3 = "str3";
    std::string strAppend = "";
    strAppend = str1.append(str2.append(str3));
    std::cout << "'.append()': " << strAppend << std::endl;
}

/** @cite https://www.javatpoint.com/cpp-string-assign-function */
void assignFunc(){
    std::string str1 = "str1";
    std::string str2 = "str2";
    std::string str3 = "str3";
    std::string str4 = "";
    str1.assign(str2);
    str3.assign("ABCDEFGHIJKLMNOPQRSTUVWXYZ", 13);
    str4.assign(10, '*');
    std::cout << "'.assign()': " << str1 << std::endl;
    std::cout << "'.assign()': " << str3 << std::endl;
    std::cout << "'.assign()': " << str4 << std::endl;
}

/** @note .find() find from left to right and .rfind() find from right to left */
void findFunc(){
    string str1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string str2 = "Aa Bb Aa";
    cout << ".find(): " << str1.find("Z") << endl;
    cout << ".find(): " << str1.find("Ñ") << endl;
    cout << ".find(): " << str2.rfind("Aa") << endl;
}

/** @note get the length of a string */
void lengthFunc(){
    str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::cout << "'.length()': " << str.length() << std::endl;
}

/** @note size() is just an alias for length() */
void sizeFunc(){
    str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::cout << "'.size()': " << str.size() << std::endl;
}

/** @note C style */
void strlenFunc(){
    char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::cout << "'.strlen()': " << strlen(str) << std::endl;
}

void toupperFunc(){
    ch = 'a';
    char uppercase = toupper(ch);
    std::cout << "'.toupper()': " << uppercase << std::endl;
}

void tolowerFunc(){
    char myChar = 'A';
    char lowercase = tolower(ch);
    cout << ".tolower(): " << lowercase << endl;
}

void reverseFunc(){
    str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    reverse(str.begin(), str.end());
    std::cout << "'.reverse()': " << str << std::endl;
}

void substrFunc(){
    std::string str = "string";
    std::string substr = "";
    substr = str.substr(0,3);
    std::cout << "'.substr()': " << substr << std::endl;
}

void swapFunc(){
    std::string str1 = "string1";
    std::string str2 = "string2";
    std::cout << str1 << str2 << std::endl;
    str1.swap(str2);
    std::cout << ".swap(): " << str1 << str2 << std::endl;
}

void insertFunc(){
    std::string str1 = "str1str1";
    std::string str2 = "str2";
    str1.insert(4, str2);
    std::cout << "'.insert()': " << str1 << std::endl;
}

void stoiFunc(){
    string myString = "12345";
    int stoiMyString = stoi(myString);
    cout << ".stoi(): " << stoiMyString << endl;
}

int main(){
    std::cout << "|*=========================*|" << std::endl;
    std::cout << "- Program start -\n" << std::endl;
    appendFunc();
    assignFunc();
    findFunc();
    lengthFunc();
    sizeFunc();
    strlenFunc();
    toupperFunc();
    tolowerFunc();
    reverseFunc();
    insertFunc();
    substrFunc();
    swapFunc();
    stoiFunc();
    std::cout << "\n- Program end -" << std::endl;
    std::cout << "|*=========================*|" << std::endl;
    return 0;
}
