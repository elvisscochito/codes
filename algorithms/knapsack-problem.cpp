#include <iostream>
#include <climits>
using namespace std;

/**
 *@author Elviro Dominguez Soriano A01424591, Ramiro Yoshua Francisco Gonzalez
Davila A01422501
 * @brief Parnorama general: Programa que utiliza un grafo para insertar datos,
buscarlos y eliminarlos con un menu de opciones.
 * @date Sep 20, 2022
 * complexity de funcion print_lstring: O(N^2)
 */

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

int knapSack(int v[], int w[], int n, int W) {
     if (W < 0)
         return INT_MIN;
     if (n < 0 || W == 0)
         return 0;
     int in = v[n] + knapSack(v, w, n - 1, W - w[n]);
     int ex = knapSack(v, w, n - 1, W);
     return max (in, ex);
}

int main() {
    
    int numero_elementos, peso, valor, capacidad;
    
    cout<<"Ingrese el numero de elementos:"<<endl;
    numero_elementos = inputValidation(numero_elementos);
    
    int v[numero_elementos];
    int w[numero_elementos];
    cout<<"Ingrese los valores de cada elemento:"<<endl;
    for(int i=0;i<numero_elementos;i++){
        valor = inputValidation(valor);
        v[i] = valor;
    }
    cout<<"Ingrese el peso de los elementos:"<<endl;
    for(int i=0;i<numero_elementos;i++){
        peso = inputValidation(peso);
        w[i] = peso;
    }

    cout << "Ingrese la capacidad de la mochila:"<<endl;
    capacidad = inputValidation(capacidad);
    /*
    int v[] = { 5, 10, 20, 30, 40, 50 }; //arreglo de valores
    int w[] = { 3, 2, 10, 6, 5, 10 };
    int W = 7;
    */
    int n = sizeof(v) / sizeof(v[0]);
    cout << "El valor de Knapsack es:" << knapSack(v, w, n - 1, capacidad);
    return 0;

}
