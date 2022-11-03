// Spanning Tree (MST) algorithm. The program is
// for adjacency matrix representation of the graph
#include <iostream>
#include <vector>
using namespace std;
/*
Autores: Ramiro Yoshua Francisco Gonzalez Davila. - A01422501, Elviro Dominguez Soriano A01424591
Proposito general del programa: Este codigo implementa el algoritmo de PRIM
el cual devuelve el arbol de expansion minima o el recorrido del arbol de expansion
con menor peso.
Complejidad: O(N^2)
*/
// Number of vertices in the graph
//#define V 5
// A utility function to find the vertex with
// minimum key value, from the set of vertices
// not yet included in MST

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

int minKey(int key[], bool mstSet[], int V)
{
 // Initialize min value
    int min = INT_MAX, min_index;
    for (int v = 0; v < V; v++)
        if (mstSet[v] == false && key[v] < min)
     min = key[v], min_index = v;
    return min_index;
}

// A utility function to print the
// constructed MST stored in parent[]
void printMST(int parent[], vector<vector<int>> graph, int V)
{
     cout << "Edge \tWeight\n";
     for (int i = 1; i < V; i++)
         cout << parent[i] << " - " << i << " \t"
         << graph[i][parent[i]] << " \n";
}
// Function to construct and print MST for
// a graph represented using adjacency
// matrix representation
void primMST(vector<vector<int>> graph, int V)
{
 // Array to store constructed MST
     int parent[V];
 // Key values used to pick minimum weight edge in cut
     int key[V];
 // To represent set of vertices included in MST
     bool mstSet[V];
 // Initialize all keys as INFINITE
     for (int i = 0; i < V; i++)
     key[i] = INT_MAX, mstSet[i] = false;
     // Always include first 1st vertex in MST.
     // Make key 0 so that this vertex is picked as first
     // vertex.
     key[0] = 0;
     parent[0] = -1; // First node is always root of MST
     // The MST will have V vertices
     for (int count = 0; count < V - 1; count++) {
     // Pick the minimum key vertex from the
     // set of vertices not yet included in MST
     int u = minKey(key, mstSet, V);
     // Add the picked vertex to the MST Set
     mstSet[u] = true;
     // Update key value and parent index of
     // the adjacent vertices of the picked vertex.
     // Consider only those vertices which are not
     // yet included in MST
 for (int v = 0; v < V; v++)
 // graph[u][v] is non zero only for adjacent
 // vertices of m mstSet[v] is false for vertices
 // not yet included in MST Update the key only
 // if graph[u][v] is smaller than key[v]
 if (graph[u][v] && mstSet[v] == false
 && graph[u][v] < key[v])
 parent[v] = u, key[v] = graph[u][v];
 }
 // print the constructed MST
 printMST(parent, graph, V);
}
// Driver's code
int main()
{
    int V, numero;
    
    cout<<"Ingrese el numero de nodos: ";
    V = inputValidation(V);
    vector<vector<int>> graph(V) ;
    cout<<endl;
    cout<<"Ingrese el grafo: "<<endl;
    for(int i = 0; i < V; i++)
    {   
        int col = V; 
        graph[i] = vector<int>(col);
        for(int j = 0; j < col; j++)
        {
            numero = inputValidation(numero);
            graph[i][j] = numero;
        }    
    }
    cout<<endl;
    // Print the solution
     primMST(graph, V);
     return 0;
}
