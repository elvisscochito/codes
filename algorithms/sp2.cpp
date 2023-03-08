#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    /* 1. leer un archivo de entrada que contiene la información de un grafo representado en forma de una matriz de adyacencias con grafos ponderados
    
    El peso de cada arista es la distancia en kilómetros entre colonia y colonia, por donde es factible meter cableado.

    El programa debe desplegar cuál es la forma óptima de cablear con fibra óptica conectando colonias de tal forma que se pueda compartir información entre cuales quiera dos colonias. */

    vector<int> graph;
    int nodes;
    cout << "IEnter nodes number: ";
    cin >> nodes;
    for (int i = 0; i < nodes; i++) {
        int x;
        cout << "Ingrese el nod nodo: ";
        cin >> x;
        graph.push_back(x);
    }
    sort(graph.begin(), graph.end());

    /* print graph vector */
    for (int i = 0; i < nodes; i++) {
        cout << graph[i] << " ";
    }

    cout << "---" << endl;

    vector<int> peso;
    for (int i = 0; i < nodes; i++) {
        int x;
        cin >> x;
        peso.push_back(x);
    }
    sort(peso.begin(), peso.end());

    return 0;
}
