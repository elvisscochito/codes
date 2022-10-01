#include<algorithm>
#include<cstring>
#include <fstream>
#include<iostream>

using namespace std;

/**
 *@author Elviro Dominguez Soriano A01424591, Ramiro Yoshua Francisco Gonzalez
Davila A01422501
 * @brief Parnorama general: Algoritmo que busca los sufijos en una string de entrada, en este caso la string
                            se toma de un archivo de texto de entrada, buscando el sufijo y entregando los 
                            coincidentes
 * @date Aug 26, 2022
 * complexity:O(m log n)
 */

struct suffix {
    int index;
    string suff;
};

int strCompare(string st1, string st2, int n) {
    int i = 0;
    while(n--) {
        if(st1[i] != st2[i]) {
            return st1[i] - st2[i];
        }
        i++;
    }
    return 0;
}

bool comp(suffix suff1, suffix suff2) { //compare two strings for sorting
    if(suff1.suff<suff2.suff) {
        return true;
    }
    return false;
}

void fillSuffixArray(string mainString, int suffArr[]) {
    int n = mainString.size();
    suffix allSuffix[n]; //array to hold all suffixes
    for(int i = 0; i<n; i++) {    
        allSuffix[i].index = i;
        allSuffix[i].suff = mainString.substr(i); //from ith position to end
    }
    sort(allSuffix, allSuffix+n, comp);
    for(int i = 0; i<n; i++) {
        suffArr[i] = allSuffix[i].index; //indexes of all sorted suffix
    }
}

void suffixArraySearch(string mainString, string pattern, int suffArr[], int array[], int *index) {
    int patLen = pattern.size();
    int strLen = mainString.size();
    int left = 0, right = strLen - 1; //left and right for binary search
    while(left <= right) {
        int mid = left + (right - left)/2;
        string tempStr = mainString.substr(suffArr[mid]);
        int result = strCompare(pattern,tempStr, patLen);
    
        if(result == 0) { //the pattern is found
            (*index)++;
            array[(*index)] = suffArr[mid];
        }
        
        if(result < 0) {
            right = mid -1;
        } else {
            left = mid +1;
        }
    }
}

int main() {
    fstream file;
    string fileName, data;
    string mainString;
    string pattern;
 
    do {
        cout << "Enter file name: \n >";
        cin >> fileName;
        file.open(fileName, ios::in);
        if (file.fail()) {
            cout << "File: '" << fileName << "' not found, try again" << endl;
        } else {
            cout << "Import data from file: '" << fileName << "'" << endl;
        }
    } while (!file);

    ifstream fich(fileName);
    if (!fich.is_open()) {
        cerr << "Something went wrong with the file\n";
        exit(EXIT_FAILURE);
    }

    while (file >> data) {
        mainString = mainString + " " + data;
    }
    cout << mainString;

    cout << "\nEnter pattern: \n> ";
    cin >> pattern;
    
    int locArray[mainString.size()];
    int index = -1;
    int suffArr[mainString.size()];
    fillSuffixArray(mainString, suffArr);
 
    suffixArraySearch(mainString, pattern, suffArr, locArray, &index);
    for(int i = 0; i <= index; i++) {
    cout << "Pattern found at position: " << locArray[i]<<endl;
    }
}
