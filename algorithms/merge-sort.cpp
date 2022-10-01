#include <cctype>
#include <iostream>
#include <string>
using namespace std;

/**
 * @author Elviro Dominguez Soriano A01424591, Ramiro Yoshua Francisco Gonzalez Davila A01422501
 * @brief A merge sort program in c++
 * @date Aug 12, 2022
 * @note complexity: O(n log n)
 */

void mergeSort(double, int, int, int);
void sortArrays (double, int, int);
static void menu();
void fillAndPrintArray();

/** @note p = left, q = middle(pivot) and r = right */
void mergeSort(double array[], int left, int middle, int right) {
    /* Create L ← A[p...q] and M ← A[q+1...r] */

    /* sub array right */
    int n1 = middle - left + 1;

    /* sub array left */
    int n2 = right - middle;

    int L[n1], M[n2];

    /* fill left or right? sub array */
    for (int i=0; i<n1; i++) {
        L[i] = array[left + i];
    }

    /* fill right sub array */
    for (int j=0; j<n2; j++) {
        M[j] = array[middle + 1 + j];
    }

    /* Maintain current index of sub-arrays and main array */
    int i, j, k;

    i = 0;
    j = 0;
    k = left;

    /** @note Until we reach either end of either L or M, pick larger among 
     * elements L and M and place them in the correct position at A[left..right] 
     */

    /** @note switch elements between sub-arrays and put into array */
    while (i < n1 && j < n2) {
        if (L[i] >= M[j]) {
            array[k] = L[i];
            i++;
        } else {
            array[k] = M[j];
            j++;
        }
        k++;
    }

    /** @note When we run out of elements in either L or M,
     * pick up the remaining elements and put in A[left..right]
     */

    while(i<n1) {
        array[k] = L[i];
        i++;
        k++;
    }

    while(j<n2) {
        array[k] = M[j];
        j++;
        k++;
    }
}

/** @note Sort both sub arrays and merge them into one array */

void sortArrays (double array[], int left, int right) {
    if (left >= right) {
        return;
    }

    int middle = (left + right - 1) / 2;

    sortArrays(array, left, middle);
    sortArrays(array, middle + 1, right);
    mergeSort(array, left, middle, right);
}

void fillAndPrintArray() {
    int size = 0;

    cout << "How many items do you want into the array? \n >";
    cin >> size;

    double array[size];

    cout << "Enter the items for the array down bellow:" << endl;
    for (int i=0; i<size; i++) {
        cout << " >";
        cin >> array[i];
    }

    double length = 0;

    /** @note length of array by right side */
    length = sizeof(array)/sizeof(array[0]);

    sortArrays(array, 0, length);

    cout << "\nmergeSort:" << endl;

    for (int i=0; i<length; i++) {
        cout << to_string(array[i]) << "\n";
    }
}

static void menu() {
    int option = 0;
    char option2 = '\0';
    bool exit = false;

    do{
        cout << "+-----------------------------+" << endl;
        cout << "|          .:Main:.           |" << endl;
        cout << "| - [1] Option Fill and Print |" << endl;
        cout << "| - [2] Option Exit           |" << endl;
        cout << "+-----------------------------+" << endl;
        cout << "Enter an option: \n >";

        cin.exceptions(std::istream::failbit);

        try {
            cin >> option;
        } catch (std::ios_base::failure &fail) {
            cin.clear();
            std::string option;
            getline(cin, option);
        }
                
        switch(option){
            case 1:
            cout << "\nCase 1 selected:\n" << endl;
            fillAndPrintArray();
            cout << "\nProcess completed successfully \n" << endl;
            break;

            case 2:
            cout << "Exit? (y/n) \n >";
            cin >> option2;
            option = tolower(option2);
            do{
                switch(option2){
                    case 'y':
                    exit = true;
                    break;

                    case 'n':
                    cout << "Exit cancel" << endl;
                    break;
                    
                    default:
                    cout << "\nInvalid option, try again\n" << endl;
                }
            } while (!true);
            break;

            default:
            cout << "\nInvalid option, try again\n" << endl;
            break;
        }
    } while(exit!=true);
}

int main() {
    cout << "Please enter just numbers\n" << endl;
    menu();

    return 0;
}
