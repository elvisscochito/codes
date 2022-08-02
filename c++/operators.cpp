#include <iostream>

/**
 * @author Elviro Dominguez Soriano
 * @brief A basic Operators program in c++
 * @date Oct 17, 2021
 * @cite W3Schools. (2021). C++ Operators. Retrieved from https://www.w3schools.com/cpp/cpp_operators.asp
 * @file Operators.cpp
 */

void arithmetic(int, int);
void assignment(int, int);
void comparison(int, int);
void logical(int, int);

/**
 * @param nums
 * @note Arithmetic operators
 */
void arithmetic(int num1, int num2){
    int addition = 0;
    int subtraction = 0;
    int multiplication = 0;
    int division = 0;
    int modulo = 0;
    int preIncrement1 = 0;
    int preIncrement2 = 0;
    int preDecrement1 = 0;
    int preDecrement2 = 0;

    std::cout << "::Arithmetic operators::" << std::endl;
    addition = num1 + num2;
    std::cout << "addition: " << addition << std::endl;

    subtraction = num1 - num2;
    std::cout << "subtraction: " << subtraction << std::endl;

    multiplication = num1 * num2;
    std::cout << "multiplication: " << multiplication << std::endl;

    division = num1 / num2;
    std::cout << "division: " << division << std::endl;

    modulo = num1 % num2;
    std::cout << "modulo: " << modulo << std::endl;

    /** @note pre increment */
    preIncrement1 = ++num1;
    preIncrement2 = ++num2;
    std::cout << "preIncrement1: " << preIncrement1 << std::endl;
    std::cout << "preIncrement2: " << preIncrement2 << std::endl;

    /** @note post increment */
    int cont1 = 0;
    for (int i = 0; i < 10; i++){
        std::cout << "postIncrement: " << i << std::endl;
        cont1++;
    }
    std::cout << "postIncrement cont: " << cont1 << std::endl;


    /** @note pre decrement */
    preDecrement1 = --num1;
    preDecrement2 = --num2;
    std::cout << "preDecrement1: " << preDecrement1 << std::endl;
    std::cout << "preDecrement2: " << preDecrement2 << std::endl;

    /** @note post decrement */
    int cont2 = 0;
    for (int i = 10; i > 0; i--){
        std::cout << "postDecrement: " << i << std::endl;
        cont2--;
    }
    std::cout << "postDecrement cont: " << cont2 << std::endl;
    std::cout << std::endl;
}

/**
 * @param nums 
 * @note Assignment Operators
 */
void assignment(int num1, int num2){

}

/** 
 * @param nums
 * @note Comparison Operators
 */
void comparison(int num1, int num2){
    int lessThan = 0;
    int greaterThan = 0;
    int lessThanEqualTo = 0;
    int greaterThanEqualTo = 0;
    int equalTo = 0;
    int notEqualTo = 0;

    std::cout << "::Comparison Operators::" << std::endl;
    equalTo = (num1 == num2);
    std::cout << "equalTo: " << equalTo << std::endl;

    notEqualTo = (num1 != num2);
    std::cout << "notEqualTo: " << notEqualTo << std::endl;

    lessThan= (num1<num2);
    std::cout << "lessThan: " << lessThan << std::endl;

    greaterThan= (num1>num2);
    std::cout << "greaterThan: " << greaterThan << std::endl;

    greaterThanEqualTo= (num1<=num2);
    std::cout << "greaterThanEqualTo: " << greaterThanEqualTo << std::endl;
    
    lessThanEqualTo= (num1>=num2);
    std::cout << "lessThanEqualTo: " << lessThanEqualTo << std::endl;
    std::cout << std::endl;
}

/**
 * @param nums
 * @note Logical Operator
 */
void logical(int num1, int num2){
    int logicalAnd = 0;
    int logicalOr = 0;
    int logicalNot = 0;

    std::cout << "::Logical Operators::" << std::endl;
    logicalAnd = (num1 > 0 && num2 > 0);
    std::cout << "logicalAnd: " << logicalAnd << std::endl;

    logicalOr = (num1 > 0 || num2 > 0);
    std::cout << "logicalOr: " << logicalOr << std::endl;

    logicalNot = (!(num1 > 0 && num2 > 0));
    std::cout << "logicalNot: " << logicalNot << std::endl;
}


int main(){
    std::cout << "|=========================|" << std::endl;
    std::cout << "- Program start - \n" << std::endl;
    arithmetic(1,2);
    comparison(1, 2);
    logical(1, 2);
    std::cout << "\n- Program end -" << std::endl;
    std::cout << "|=========================|" << std::endl;
    return 0;
}
