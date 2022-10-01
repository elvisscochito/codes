#include <algorithm>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

/**
 *@author Elviro Dominguez Soriano A01424591, Ramiro Yoshua Francisco Gonzalez Davila A01422501
 * @brief Parnorama general: Recibimos un numero multiplo de 4 mayor a 16 y menor a 64, recibimos el nombre de un archivo del que sacaremos el texto a hashear, el resultado final es una cadena hexadecimal que representa el hasheo del texto del archivo. Recibimos n, lo divimos entre 4 y ese sera el modulo de la sumatoria de los ascci que almacenamos en la tabla para al final concatenar todos
 * @date Aug 26, 2022
 * complexity:
 */

/** @note signs */
int inputValidation(int);
void hashFunc(int, vector<string>);

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

void hashFunc(int n, vector<string> data) {
    int module = n / 4;
    int ascciSum = 0;
    stringstream stream;
    vector<string> output;

    /** @note get ascci by each char */
    for (auto i : data) {
        for (int j = 0; j < i.length(); j++) {
            ascciSum += int(i[j]) % module;
            /* cout << i[j] << int(i[j]) % module << endl; */
        }
        cout << i << ": " << ascciSum << endl;

        /** @note do hexa converter */
        stream << hex << ascciSum;
        string hexaConvert(stream.str());

        /** @note send hexa data to vector */
        output.push_back(hexaConvert);    
    }

    cout << "Hash file: " << output.back();
}

int main() {
    int n;
    bool correcto = false;
    vector<string> datos;
    ifstream file;
    string fileName, data;

    cout << "Enter a multiple of 4 >= than 16 and <= than 64" << endl;

    do {
        n = inputValidation(n);
        if (n % 4 == 0 and n >= 16 and n <= 64) {
            correcto = true;
        } else {
            cout << "Error try again, please remember enter a multiple of 4 >= than 16 and <= than 64" << endl;
        }
    } while (!correcto);
    
    do {
        cout << "Enter file name: \n >";
        cin >> fileName;
        file.open(fileName, ios::in);
        if (file.fail()) {
            cout << "File: '" << fileName << "' not found, try again" << endl;
        } else {
            cout << "Import data from file: '" << fileName << "'" << endl;
        }
    } while (!file);

    ifstream fich(fileName);
    if (!fich.is_open()) {
        cerr << "Something went wrong with the file\n";
        exit(EXIT_FAILURE);
    }

    while (file >> data) {
        datos.push_back(data);
    }
    
    hashFunc(n, datos);
}
