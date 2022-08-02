#include <iostream>
#include <map>

/**
 * @author Elviro Dominguez Soriano
 * @brief A basic Maps program in c++
 * @date Oct 17, 2021
 * @file map.cpp
 */

void mapFunc();

void mapFunc(){
    std::map<char, int> m1 = {
        {'A', 1},
        {'B', 2},
        {'C', 3},
    };
    std::cout << m1['A'] << std::endl;
    std::cout << m1['D'] << std::endl; // print 0, because it doesn't exist so it's false
    m1['D'] = 4;
    std::cout << m1['D'] << std::endl;
    m1.insert(std::pair<char, int>('E', 5));
    std::cout << m1['E'] << std::endl;
    std::pair<char, int> p1('F', 6);
    m1.insert(p1);
    std::cout << m1['F'] << std::endl;
    std::cout << "first: " << p1.first << std::endl;
    std::cout << "second: " << p1.second  << std::endl;
    
    std::cout << ".size(): " << m1.size() << std::endl;
    
    for (auto i = m1.begin(); i != m1.end(); ++i){
        std ::cout << i -> first << i -> second << std::endl;
    }

    m1.erase(p1.first);
    std::cout << ".erase(): " << m1['F']  << std::endl;

    m1.clear();
    std::cout << ".clear(): " << m1.empty() << std::endl; // 0 for false and 1 for true
}

int main(){
    std::cout << "|*=========================*|" << std::endl;
    std::cout << "- Program start - \n" << std::endl;
    mapFunc();
    std::cout << "\n - Program end -" << std::endl;
    std::cout << "|*=========================*|" << std::endl;
    return 0;
}
