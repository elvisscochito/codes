#include <iostream>
#include <set>
#include <queue>
#include <climits>
using namespace std;

/*
Autores: Ramiro Yoshua Francisco Gonzalez Davila. - A01422501, Elviro Dominguez Soriano A01424591
Proposito general del programa: Programa que implementa el algoritmo The Knight’s tour el cual dado el tamaño de un tablero, coordenadas de inicio y final del recorrido, calcula el numero minimo de movimientos.
Complejidad: O(N^2) depende del tamaño y posibles movimientos.
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

// A continuación, las arrays detallan los ocho movimientos posibles
// por un caballero
int row[] = { 2, 2, -2, -2, 1, 1, -1, -1 };
int col[] = { -1, 1, 1, -1, 2, -2, 2, -2 };
 
// Comprueba si (x, y) son coordenadas de tablero de ajedrez válidas.
// Tenga en cuenta que un caballo no puede salir del tablero
bool isValid(int x, int y, int N) {
    return (x >= 0 && x < N) && (y >= 0 && y < N);
}
 
// Un nodo de queue usado en BFS
struct Node
{
    // (x, y) representa las coordenadas del tablero de ajedrez
    // `dist` representa su distancia mínima desde la fuente
    int x, y, dist;
 
    // constructor de nodos
    Node(int x, int y, int dist = 0): x(x), y(y), dist(dist) {}
 
    // Como estamos usando struct como clave en `std::set`,
    // necesitamos sobrecargar el `<operator`.
    // Alternativamente, podemos usar `std::pair<int, int>` como clave
    // para almacenar las coordenadas de la matriz en el conjunto.
 
    bool operator<(const Node& o) const {
        return x < o.x || (x == o.x && y < o.y);
    }
};
 
// Encuentra el número mínimo de pasos dados por el caballero
// desde el origen para llegar al destino usando BFS
int findShortestDistance(int N, Node src, Node dest)
{
    // configurado para verificar si la celda de la matriz se visita antes o no
    set<Node> visited;
 
    // crear una queue y poner en queue el primer nodo
    queue<Node> q;
    q.push(src);
 
    // bucle hasta que la queue esté vacía
    while (!q.empty())
    {
        // sacar de la queue el nodo frontal y procesarlo
        Node node = q.front();
        q.pop();
 
        int x = node.x;
        int y = node.y;
        int dist = node.dist;
 
        // si se alcanza el destino, distancia de regreso
        if (x == dest.x && y == dest.y) {
            return dist;
        }
 
        // omitir si la ubicación se visita antes
        if (!visited.count(node))
        {
            // marca el nodo actual como visitado
            visited.insert(node);
 
            // verifica los ocho movimientos posibles para un caballo
            // y poner en queue cada movimiento válido
            for (int i = 0; i < 8; i++)
            {
                // obtener la posición válida del caballo desde la posición actual en
                // el tablero de ajedrez y ponerlo en queue con +1 de distancia
                int x1 = x + row[i];
                int y1 = y + col[i];
 
                if (isValid(x1, y1, N)) {
                    q.push({x1, y1, dist + 1});
                }
            }
        }
    }
 
    // devuelve infinito si la ruta no es posible
    return INT_MAX;
}
 
int main()
{
    int N,x1,y1,x2,y2;
    cout<<"Ingrese el tamaño del tablero en numero entero: ";
    N = inputValidation(N);
    // matriz N x N
    //int N = 9;
    cout<<"Ingrese coordenada x de origen del caballo: ";
    x1 = inputValidation(x1);
    cout<<"Ingrese coordenada y de origen del caballo: ";
    y1 = inputValidation(y1);
    // coordenadas de origen
    Node src = {x1, y1};
    cout<<"Ingrese coordenada x de destino del caballo: ";
    x2 = inputValidation(x2);
    cout<<"Ingrese coordenada y de odestino del caballo: ";
    y2 = inputValidation(y2);
    // coordenadas de destino
    Node dest = {x2, y2};
 
    cout << "El numero minimo de movimientos es " <<
            findShortestDistance(N, src, dest);
    return 0;
}
