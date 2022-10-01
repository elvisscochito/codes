#include <iostream>
#include <stdlib.h>
#include <string.h>
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



void print_lstring(char* X, char* Y, int m, int n){
     int longest[m + 1][n + 1];
     int len = 0;
     int row, col;
     for (int i = 0; i <= m; i++) {
         for (int j = 0; j <= n; j++) {
             if (i == 0 || j == 0)
                 longest[i][j] = 0;
             else if (X[i - 1] == Y[j - 1]) {
                 longest[i][j] = longest[i - 1][j - 1] + 1;
                 if (len < longest[i][j]) {
                     len = longest[i][j];
                     row = i;
                     col = j;
                 }
             }
             else
                 longest[i][j] = 0;
         }
     }
     if (len == 0) {
         cout << "There exists no common substring";
         return;
     }
     char* final_str = (char*)malloc((len + 1) * sizeof(char));
     while (longest[row][col] != 0) {
         final_str[--len] = X[row - 1];
         row--;
         col--;
     }
     cout << final_str;
}

int main(){
     char X[] = "helloworld";
     char Y[] = "worldbook";
     int m = strlen(X);
     int n = strlen(Y);
     print_lstring(X, Y, m, n);
     return 0;
}
