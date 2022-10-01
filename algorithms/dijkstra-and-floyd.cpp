#include<iostream>
#include<string>
/* #include<bits/stdc++.h> */
#include<algorithm>
using namespace std;
/**
 *@author Elviro Dominguez Soriano A01424591, Ramiro Yoshua Francisco Gonzalez
Davila A01422501
 * @brief Parnorama general: Programa donde se realiza el algoritmo de Dijstra y Floyd, para recorrer grafos con el menor peso.
 * @date Sep 20, 2022
 * complexity de funcion print_lstring: O(N^2)
 */

int cost[100][100];
//int V;  
int EMPTY = 999; 

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

void init(int dist[], int act){

  for(int i = 0; i < 0; i++){
    dist[i] = EMPTY;
  }
  dist[act] = 0; 

}

int near(int dist[], bool visited[], int V) {

  int node = 0; 
  int minVal = EMPTY;

  for (int i=0; i < V ; i++) {
		if (!visited[i] && dist[i] < minVal) {

			minVal = dist[i]; 
			node = i; 
		}
  }
  return node ; 
}

//Funcion de impresion de los nodos
void print(int dist[], int act, int V) {
  
  for(int i = 0; i < V; i++) {
    cout << "Node " << act << " to node " << i << ": " << dist[i];

    cout << endl; 
  }
}

// COMPLEJIDAD O(n^2) Funcion principal Dijkstra
void dijkstra(int act, int V) {

  int parent[100], dist[100]; 
  init(dist, act);
  bool visited[100] = {0};

  fill(dist , dist + V  , INT_MAX ) ; 

    dist[act] = 0 ; 
    parent[act] = -1 ;

  for(int i = 0; i < V; i++){

    int n = near(dist, visited, V); 
    visited[n] = true;

    for(int adj = 0; adj < V; adj++){
      
      if(!visited[adj] && (dist[n] + cost[n][adj]) < dist[adj] && cost[n][adj] != EMPTY) {
        
        parent[adj] = n ; 
        dist[adj] = dist[n] + cost[n][adj]; 
      }
    }

  }
  print(dist, act, V);
    
}

//Complejidad: O(N^3) Funcion principal de Floyd
void floyd(int **graph, int V){

  int distances[V][V];
  for(int row = 0; row < V; row++) 
    for(int col = 0; col < V; col++) {
      distances[row][col] = graph[row][col]; //Copiando los valores de el grafo inicial
    }
	

  for(int desp = 0; desp < V; desp++) //haciendo el desplazamiento a partir de los puntos
    for(int row = 0; row < V; row++)
      for(int col = 0; col < V; col++){
        distances[row][col] = min(distances[row][col], distances[row][desp] + distances[desp][col]); //Estableciendo el recorrido con el peso minimo
      }

  for(int row = 0; row < V; row++) {
    for(int col = 0; col < V; col++) {
      cout<< distances[row][col] << " ";
    }
    cout<<endl;
  }
}

void callFunction(int **caseX, int V){
  
  int rows = V;
  int **graph = new int *[rows];

  for (int i = 0 ;i < rows; i++) {

    graph[i] = new int[rows];

    for (int j = 0 ; j < rows; j++) {

      int tempCost;
      tempCost = caseX[i][j];

      if(tempCost == -1)
        tempCost = 999; 
      
      cost[i][j] = tempCost; 
      graph[i][j] = tempCost;
    }
  }

  cout << "DIJKSTRA" << endl; 

  for(int x = 0; x < rows; x++)
    dijkstra(x, rows); 

  cout << endl << "FLOYD" << endl;
  floyd(graph, rows);
}


int main(void) { 

  
  int V;
  cout << endl << "Ingresa el número de vértices: ";
  V = inputValidation(V);

  cout << "Ingresa la matriz de adyacencia: " << endl; 
  int **graph = new int *[V];

  for (int i = 0 ;i < V; i++) {
    graph[i] = new int[V];
    for (int j = 0 ; j < V; j++) {

      int tempCost;
      cin >> tempCost;

      if(tempCost == -1)
        tempCost = 999; 
      
      cost[i][j] = tempCost; 
      graph[i][j] = tempCost;
    }
  }

  
  cout << "DIJKSTRA" << endl; 

  for(int x = 0; x < V; x++){
    
    dijkstra(x, V); 
  }

  cout << endl << "FLOYD" << endl; 
  
  floyd(graph,V);
}

