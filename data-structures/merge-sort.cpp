#include <iostream>
using namespace std;

/**
 * @author Elviro Dominguez Soriano
 * @brief A merge sort program in c++
 * @date Aug 12, 2022
 */

/* void mergeSort(int[], int, int, int); */

/** @note p = left, q = middle(pivot) and r = right */
void mergeSort(int array[], int left, int middle, int right) {
    /* Create L ← A[p...q] and M ← A[q+1...r] */

    /* sub array right */
    int n1 = middle - left + 1;

    /* sub array left */
    int n2 = right - middle;

    int L[n1], M[n2];

    /* fill left sub array */
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

    /* switch elements between sub-arrays and put into array */
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

void sortArrays (int array[], int left, int right) {
    if (left >= right) {
        return;
    }

    int middle = (left + right - 1) / 2;

    sortArrays(array, left, middle);
    sortArrays(array, middle + 1, right);
    mergeSort(array, left, middle, right);
}

int main() {
    int array[] = {1,8,3,6,2,4};
    int right = sizeof(array)/sizeof(array[0]);

    sortArrays(array, 0, right);

    cout << "mergeSort:" << endl;

    for (int i=0; i<right; i++) {
        cout << to_string(array[i]) << "\n";
    }

    return 0;
}
