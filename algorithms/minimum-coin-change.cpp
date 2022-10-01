#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * @author Elviro Dominguez Soriano A01424591
 * @brief A minium number of denominations with a dynamic an alvaro program in c++
 * @date Aug 16, 2022
 * @note complexity: O(mV)
 * @see https://es.acervolima.com/algoritmo-codicioso-para-encontrar-el-numero-minimo-de-monedas/
 */

/** @note signs */
vector<int> fill(int);
int inputValidation(int);
void minimumCoinChange();

/** @note global vars */
vector<int> availableCash;

int inputValidation(int value) {
    while (!(cin >> value) || value < 0) {
        if (!cin) {
            cout << "Invalid input\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        cout << "Please enter a positive number: ";
    }
    return value;
}

vector<int> fillVector() {
    int cash = 0;

    do {
        cash = inputValidation(cash);
        availableCash.push_back(cash);
    } while (cash != 0 && cash > 0);

    /** @note remove last item in array (0) and negative numbers */
    auto it = availableCash.begin();

    while (it != availableCash.end()) {
        if (*it == 0 || *it < 0) {
            availableCash.erase(it);
        } else {
            ++it;
        }
    }

    if (availableCash.size() == 0) {
        cout << "\nYou don't have any available coins, please try again" << endl;
        fillVector();
    }

    return availableCash;
}

void miniumCoinChange() {
    int cost = 0;
    int amount = 0;
    int change = 0;
    vector<int> cashback;
    cout << "How many available coins do you have?" << endl;
    cout << "(Enter 0 to done)" << endl;

    availableCash = fillVector();

    /** @note sort vector/array in descending order */
    reverse(availableCash.begin(), availableCash.end());
    
    cout << "\nHow much for it?" << endl;
    cost = inputValidation(cost);

    cout << "\nPlease, paid for it" << endl;

    /** @note loop until amount is according to cost */
    do {
        amount = inputValidation(amount);
        if (amount >= cost) {
            change = amount - cost;
        } else {
            cout << "You don't have enough money, please try again" << endl;
        }
    } while (amount < cost);

    cout << "\nYour cashback is: " << change << " in: " << endl;

    /** @note traverse trough array and return cash into cashback array. Another way when arrary isn't sorted: for(int i = availableCash.size() - 1; i >= 0; i--) */
    for (int i = 0; i < availableCash.size(); i++) {
        while (change >= availableCash[i]) {
            change -= availableCash[i];
            cashback.push_back(availableCash[i]);
        }
    }

    for (int i: cashback) {
        cout << i << " ";
    }
}

int main() {
    cout << "Please enter just natural numbers\n" << endl;

    miniumCoinChange();

    return 0;
}
