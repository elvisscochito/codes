#include <iostream>
#include <string>

using namespace std;

/**
 * @author Elviro Dominguez Soriano A01424591
 * @brief A Knuth-Morris-Pratt Algorithm to find patterns in sub-patterns program in c++
 * @date Aug 23, 2022
 * @note complexity: O(n)
 * @see https://www.tutorialspoint.com/Knuth-Morris-Pratt-Algorithm
 */

/** @note signs */
void findPrefix(string, int, int);
void kmpPattern(string, string, int, int);

void findPrefix(string pattern, int m, int prefArray[]) {
    int length = 0;

    /** @note first place is always 0 as no prefix  */
    prefArray[0] = 0;

    for (int i = 1; i < m; i++) {
        if (pattern[i] == pattern[length]) {
            length++;
            prefArray[i] = length;
        } else {
            if (length != 0) {
                length = prefArray[length -1];
                /** @note decrease i to avoid effect of increasing after iteration  */
                i--;
            } else {
                prefArray[i] = 0;
            }
        }
    }
}

void kmpPattSearch(string mainString, string pattern, int *locArray, int &loc) {
    int n, m, i = 0, j = 0;

    n = mainString.size();
    m = pattern.size();

    /** @note prefix array as same size of pattern */
    int prefixArray[m];

    findPrefix(pattern, m, prefixArray);
    loc = 0;

    while (i < n) {
        if (mainString[i] == pattern[j]) {
            i++; 
            j++;
        }

        if (j == m) {
            /** @note save location of pattern */
            locArray[loc] = i - j;
            loc++;
            /** @note get the prefix length from array */
            j = prefixArray[j - 1];
        } else if (i < n && pattern[j] != mainString[i]) {
            if (j != 0) {
                j = prefixArray[j - 1];
            } else {
                i++;
            }
        }
    }
}

int main() {
    string mainString, pattern = "";

    /** @note locator */
    int index = 0;

    cout << "Enter main string: ";
    cin >> mainString;

    cout << "Enter pattern: ";
    cin >> pattern;

    int locationArray[mainString.size()];

    kmpPattSearch(mainString, pattern, locationArray, index);

    if (index != 0) {
        for (int i = 0; i < index; i++) {
            cout << "Pattern found at: " << locationArray[i] << endl;
            cout << "Match times: " << index << endl;
        }
    } else {
        cout << "Pattern not found" << endl;
    }

    return 0;
}
