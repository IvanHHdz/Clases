// Detectar si el usuario ingresó un palíndromo

#include <iostream>
#include <string>
using namespace std;

int main() {
    string palabra, original;

    cout <<  "Ingrese una palabra: ";
    // cin >> original;     // Esto solo permite ingresar una palabra sin espacios
    getline(cin, original); // Permite ingresar palabras con espacios
    palabra = original;

    // ? Convertir a minúsculas para ignorar mayúsculas y minúsculas
    for (char &c : palabra) {
        c = tolower(c); 
    }

    // ? Eliminar espacios en blanco
    while (palabra.find(' ') != string::npos) {
        palabra.erase(palabra.find(' '), 1);
    }

    bool esPalindromo = true;
    int longitud = palabra.length();

    for (int i = 0; i < longitud / 2; i++) {
        if (palabra[i] != palabra[longitud - 1 - i]) {
            esPalindromo = false;
            break;
        }
    }

    cout << "La palabra/frase '" << original << "' " << (esPalindromo ? "es un palíndromo." : "no es un palíndromo.") << endl;

    return 0;
}