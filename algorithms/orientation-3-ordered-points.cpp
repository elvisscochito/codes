// A C++ program to check if two given line segments intersect
#include <iostream>
#include <vector>
using namespace std;
 /*
Autores: Ramiro Yoshua Francisco Gonzalez Davila. - A01422501, Elviro Dominguez Soriano A01424591
Proposito general del programa: El programa recibe un numero n
que debe ser multiplo de 4 para crear pares de lineas indicando sus puntos
regresara False si existe una interseccion entre las lineas o
True en caso de que si intersecten.
Complejidad: O(N^2) en funcion del numero de puntos.
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

struct Point
{
 int x;
 int y;
};
 
// Given three collinear points p, q, r, the function checks if
// point q lies on line segment 'pr'
bool onSegment(Point p, Point q, Point r)
{
 if (q.x <= max(p.x, r.x) && q.x >= min(p.x, r.x) &&
 q.y <= max(p.y, r.y) && q.y >= min(p.y, r.y))
 return true;
 
 return false;
}
 
// To find orientation of ordered triplet (p, q, r).
// The function returns following values
// 0 --> p, q and r are collinear
// 1 --> Clockwise
// 2 --> Counterclockwise
int orientation(Point p, Point q, Point r)
{
 // See https://www.geeksforgeeks.org/orientation-3-ordered-points/
 // for details of below formula.
 int val = (q.y - p.y) * (r.x - q.x) -
 (q.x - p.x) * (r.y - q.y);
 
 if (val == 0) return 0; // collinear
 
 return (val > 0)? 1: 2; // clock or counterclock wise
}
 
// The main function that returns true if line segment 'p1q1'
// and 'p2q2' intersect.
bool doIntersect(Point p1, Point q1, Point p2, Point q2)
{
 // Find the four orientations needed for general and
 // special cases
 int o1 = orientation(p1, q1, p2);
 int o2 = orientation(p1, q1, q2);
 int o3 = orientation(p2, q2, p1);
 int o4 = orientation(p2, q2, q1);
 
 // General case
 if (o1 != o2 && o3 != o4)
 return true;
 
 // Special Cases
 // p1, q1 and p2 are collinear and p2 lies on segment p1q1
 if (o1 == 0 && onSegment(p1, p2, q1)) return true;
 
 // p1, q1 and q2 are collinear and q2 lies on segment p1q1
 if (o2 == 0 && onSegment(p1, q2, q1)) return true;
 
 // p2, q2 and p1 are collinear and p1 lies on segment p2q2
 if (o3 == 0 && onSegment(p2, p1, q2)) return true;
 
 // p2, q2 and q1 are collinear and q1 lies on segment p2q2
 if (o4 == 0 && onSegment(p2, q1, q2)) return true;
 
 return false; // Doesn't fall in any of the above cases
}
 
// Driver program to test above functions
int main()
{
    struct Point p1 = {1, 1}, q1 = {10, 1};
    struct Point p2 = {1, 2}, q2 = {10, 2};

    int n;
    int x1,y1,x2,y2,x3,y3,x4,y4;
    bool valido;
    vector<bool> inters;

    do{
        cout<<"Ingrese el numero de puntos, debe ser multiplo de 4:";
        n = inputValidation(n);   
        if(n%4==0){
            valido= true;
        }
        else{
            valido = false;
        }
    }while(!valido);

    for(int i = 0; i < n/4;i++){
        cout<<"Ingrese el punto x1: ";
        x1 = inputValidation(x1);
        cout<<"Ingrese el punto y1: ";
        y1 = inputValidation(y1);
        cout<<"Ingrese el punto x2: ";
        x2 = inputValidation(x2);
        cout<<"Ingrese el punto y2: ";
        y2 = inputValidation(y2);
        cout<<"Ingrese el punto x3: ";
        x3 = inputValidation(x3);
        cout<<"Ingrese el punto y3: ";
        y3 = inputValidation(y3);
        cout<<"Ingrese el punto x4: ";
        x4 = inputValidation(x4);
        cout<<"Ingrese el punto y4: ";
        y4 = inputValidation(y4);
        p1 = {x1,y1}, q1 = {x2,y2};
        p2 = {x3, y3}, q2 = {x4, y4};   
        inters.push_back(doIntersect(p1, q1, p2, q2));
        cout<<"\n";
}
    
cout<<"Intersecciones:"<<endl;
    for(bool i: inters){
        (i)?cout << "True\n": cout << "False\n";
    }
 
 /*
 p1 = {10, 0}, q1 = {0, 10};
 p2 = {0, 0}, q2 = {10, 10};
 doIntersect(p1, q1, p2, q2)? cout << "Yes\n": cout << "No\n";
 
 p1 = {-5, -5}, q1 = {0, 0};
 p2 = {1, 1}, q2 = {10, 10};
 doIntersect(p1, q1, p2, q2)? cout << "Yes\n": cout << "No\n";
 */
 return 0;
}
