#include <iostream>
using namespace std;


/**
 *@author Elviro Dominguez Soriano A01424591, Ramiro Yoshua Francisco Gonzalez
Davila A01422501
 * @brief Parnorama general: Programa que utiliza un grafo para insertar datos,
buscarlos y eliminarlos con un menu de opciones.
 * @date Sep 20, 2022
 * complexity de funcion print_lstring: O(N^2)
 */


// Define the character size
#define CHAR_SIZE 128

// A class to store a Trie node
class Trie
{
public:
    bool isLeaf;
    Trie *character[CHAR_SIZE];
    // Constructor
    Trie()
    {
        this->isLeaf = false;
        for (int i = 0; i < CHAR_SIZE; i++)
        {
            this->character[i] = nullptr;
        }
    }
    void insert(string);
    bool deletion(Trie *&, string);
    bool search(string);
    bool haveChildren(Trie const *);
};

// Iterative function to insert a key into a Trie
void Trie::insert(string key)
{
    // start from the root node
    Trie *curr = this;
    for (int i = 0; i < key.length(); i++)
    {
        // create a new node if the path doesn't exist
        if (curr->character[key[i]] == nullptr)
        {
            curr->character[key[i]] = new Trie();
        }
        // go to the next node
        curr = curr->character[key[i]];
    }
    // mark the current node as a leaf
    curr->isLeaf = true;
}

// Iterative function to search a key in a Trie. It returns true
// if the key is found in the Trie; otherwise, it returns false
bool Trie::search(string key)
{
    // return false if Trie is empty
    if ((uintptr_t)this < 0x10)
    {
        return false;
    }
    Trie *curr = this;
    for (int i = 0; i < key.length(); i++)
    {
        // go to the next node
        curr = curr->character[key[i]];
        // if the string is invalid (reached end of a path in the Trie)
        if (curr == nullptr)
        {
            return false;
        }
    }
    // return true if the current node is a leaf and the
    // end of the string is reached
    return curr->isLeaf;
}

// Returns true if a given node has any children
bool Trie::haveChildren(Trie const *curr)
{
    for (int i = 0; i < CHAR_SIZE; i++)
    {
        if (curr->character[i])
        {
            return true; // child found
        }
    }
    return false;
}

// Recursive function to delete a key in the Trie
bool Trie::deletion(Trie *&curr, string key)
{
    // return if Trie is empty
    if (curr == nullptr)
    {
        return false;
    }
    // if the end of the key is not reached
    if (key.length())
    {
        // recur for the node corresponding to the next character in the key
        // and if it returns true, delete the current node (if it is non-leaf)
        if (curr != nullptr &&
            curr->character[key[0]] != nullptr && deletion(curr->character[key[0]], key.substr(1)) && curr->isLeaf == false)
        {
            if (!haveChildren(curr))
            {
                delete curr;
                curr = nullptr;
                return true;
            }
            else
            {
                return false;
            }
        }
    }
    // if the end of the key is reached
    if (key.length() == 0 && curr->isLeaf)
    {
        // if the current node is a leaf node and doesn't have any children
        if (!haveChildren(curr))
        {
            // delete the current node
            delete curr;
            curr = nullptr;
            // delete the non-leaf parent nodes
            return true;
        }

        // if the current node is a leaf node and has children
        else
        {
            // mark the current node as a non-leaf node (DON'T DELETE IT)
            curr->isLeaf = false;
            // don't delete its parent nodes
            return false;
        }
    }
    return false;
}

// C++ implementation of Trie data structure
int main()
{
    Trie *head = new Trie();
    bool exit = false;
    int opcion;

    do{
        cout<<"Ingrese una opcion:"<<endl;
        cout<<"Opcion 1: Insertar dato."<<endl;
        cout<<"Opcion 2: Eliminar dato."<<endl;
        cout<<"Opcion 3: Buscar dato."<<endl;
        cout<<"Opcion 0: Salir"<<endl;
        cout<<"Opcion:";
        cin>>opcion;
        string palabra;
        switch(opcion){
            case 1:
                cout<<"Ingrese palabra a insertar:"<<endl;
                cin >> palabra;
                head -> insert(palabra);
                break;
            case 2:
                cout<<"Ingrese palabra a borrar"<<endl;
                cin >> palabra;
                head -> deletion(head, palabra);
                break;
            case 3:
                cout<<"Ingrese la palabra a buscar"<<endl;
                cin >> palabra;
                cout<< head -> search(palabra) <<endl;
                break;
            default:
                exit = true;
        }
    }while(exit != true);
    
    /*
    head->insert("hello");
    cout << head->search("hello") << " ";
    // print 1

    head->insert("helloworld");
    cout << head->search("helloworld") << " "; // print 1

    cout << head->search("helll") << " "; // print 0 (Not found)

    head->insert("hell");
    cout << head->search("hell") << " "; // print 1

    head->insert("h");
    cout << head->search("h"); // print 1

    cout << endl;

    head->deletion(head, "hello");
    cout << head->search("hello") << " "; // print 0

    cout << head->search("helloworld") << " "; // print 1
    cout << head->search("hell");              // print 1

    cout << endl;

    head->deletion(head, "h");
    cout << head->search("h") << " ";    // print 0
    cout << head->search("hell") << " "; // print 1
    cout << head->search("helloworld");  // print 1

    cout << endl;

    head->deletion(head, "helloworld");
    cout << head->search("helloworld") << " "; // print 0
    cout << head->search("hell") << " ";       // print 1

    head->deletion(head, "hell");
    cout << head->search("hell"); // print 0

    cout << endl;

    if (head == nullptr)
    {
        cout << "Trie empty!!\n"; // Trie is empty now
    }

    cout << head->search("hell"); // print 0
    */
    return 0;
}
