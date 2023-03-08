/* C++ program to find Approximate Median using 1/2 Approximate Algorithm */
#include <iostream>
#include <random>
#include <set>
using namespace std;

/*
Autores: Ramiro Yoshua Francisco Gonzalez Davila. - A01422501, Elviro Dominguez Soriano A01424591
Proposito general del programa: Programa que implementa el algoritmo las vegas que genera un indice random para realizar un quick sort para buscar
en un arreglo el numero indicado
Complejidad: la complejidad aleatoria debido a que es un algoritmo aleatorio
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

// This function returns the Approximate Median
int randApproxMedian(int arr[],int n, int buscar)
{
 // Declaration for the random number generator
 random_device rand_dev;
 mt19937 generator(rand_dev());
 
 // Random number generated will be in the range [0,n-1]
 uniform_int_distribution<int> distribution(0, n-1);
 
 if (n==0)
 return 0;
 
 int k = 10*log2(n); // Taking c as 10
 
 // A set stores unique elements in sorted order
 set<int> s;
 for (int i=0; i<k; i++)
 {
 // Generating a random index
 int index = distribution(generator);
 
 //Inserting into the set
 s.insert(arr[index]);
 }
 
 set<int> ::iterator itr = s.begin();
 int contador = 0; 
for (auto it = s.begin(); it != s.end(); ++it){
    cout<<" "<< *it;
 }
    cout<<endl;
itr = s.begin();
for (auto it = s.begin(); it != s.end(); ++it){
    contador++; 
     if(*it ==buscar){
         return contador-1;
     }
 }
 
 // Return the median
 return -1;
}
 
// Driver method to test above method
int main()
{
 int arr[] = {12, 3, 2, 4, 5, 6, 8, 7};
 int n = sizeof(arr)/sizeof(int);
int numBuscar;
    cout<<"Ingrese el numero a buscar en el arreglo"<<endl;
    numBuscar = inputValidation(numBuscar);
 int indice = randApproxMedian(arr,n,numBuscar);
    cout<< "El numero se encuentra en el indice: "<< ((indice == -1) ? "No se encuentra el numero en el arreglo":to_string(indice));
 return 0;
}
