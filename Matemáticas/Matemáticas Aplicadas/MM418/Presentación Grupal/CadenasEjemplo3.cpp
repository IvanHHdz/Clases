// Verificar si dos palabras son anagramas

#include <iostream>
#include <string>
using namespace std;

bool sonAnagramas(string palabra1, string palabra2) {
    // ? Convertir a minúsculas para ignorar mayúsculas y minúsculas
    for (int i = 0; i < palabra1.length(); i++) {
        palabra1[i] = tolower(palabra1[i]);
    }
    for (int i = 0; i < palabra2.length(); i++) {
        palabra2[i] = tolower(palabra2[i]);
    }

    // ? Verificar si las palabras tienen la misma longitud
    if (palabra1.length() != palabra2.length()) {
        return false;
    }

    // ? Verificar si las palabras son anagramas
    for (int i = 0; i < palabra1.length(); i++) {
        char c = palabra1[i];
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
