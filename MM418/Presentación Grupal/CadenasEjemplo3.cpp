// Verificar si dos palabras son anagramas

#include <iostream>
#include <string>
using namespace std;

bool sonAnagramas(string palabra1, string palabra2) {
    // ? Convertir a minúsculas para ignorar mayúsculas y minúsculas
    for (char &c : palabra1) {
        c = tolower(c); 
    }
    for (char &c : palabra2) {
        c = tolower(c); 
    }

    // ? Verificar si las palabras tienen la misma longitud
    if (palabra1.length() != palabra2.length()) {
        return false;
    }

    // ? Verificar si las palabras son anagramas
    for (char c : palabra1) {
        int pos = palabra2.find(c);
        if (pos == -1) {
            return false;
        }
        palabra2.erase(pos, 1);
    }

    return true;
}

int main() {
    string palabra1, palabra2;

    cout << "Ingrese la primera palabra: ";
    cin >> palabra1;
    cout << "Ingrese la segunda palabra: ";
    cin >> palabra2;

    if (sonAnagramas(palabra1, palabra2)) {
        cout << "Las palabras son anagramas." << endl;
    } else {
        cout << "Las palabras no son anagramas." << endl;
    }

    return 0;
}