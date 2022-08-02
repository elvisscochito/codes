#include <iostream>
#include <vector>
using namespace std;

/**
 * @author Elviro Dominguez Soriano
 * @brief A basic Vector program in c++
 * @date Oct 17, 2021
 * @file vector.cpp
 */

void vectorFunc();

void vectorFunc(){
    std::vector<int> v1 = {1, 2, 3, 4};
    v1.push_back(5);
    v1.pop_back();
    v1.shrink_to_fit();
    std::cout << "v1: " << v1[1] << std::endl;
    std::cout << ".front(): " << v1.front() << std::endl;
    std::cout << ".back(): " << v1.back() << std::endl;
    std::cout << ".size(): " << v1.size() << std::endl; // check current elements in the vector
    std::cout << ".capacity(): " << v1.capacity() << std::endl; // increment capacity as required

    for (int i: v1){
        std::cout << i << std::endl;
    }

    std::vector<int> v2 = {1, 2, 3, 4};
    v2.insert(v2.begin(), 5);
    v2.insert(v2.end(), 6);
    std::cout << ".insert(): " << v2[0] << std::endl;
    v2.erase(v2.begin());
    std::cout << ".erase(): " << v2[0] << std::endl;

    for (int i = 0; i < v2.size(); i++){
        std::cout << v2[i] << std::endl;
    }

    cout << endl;
    
    std::vector<int> v3 = {1, 2, 3, 4};

    for (int i : v3) {
        cout << i << endl;
    }

    int num = 0;
    cout << "> ";
    cin >> num;
    for (int i = 0; i < v3.size(); i++) {
        if (num == v3[i]) {
            cout << "Item found in " << v2[i] << endl;
        } else {
            cout << "Item not found in " << endl;
        }
    }
}

int main(){
    std::cout << "|*=========================*|" << std::endl;
    std::cout << "- Program start - \n" << std::endl;
    vectorFunc();
    std::cout << "\n - Program end -" << std::endl;
    std::cout << "|*=========================*|" << std::endl;
    return 0;
}
