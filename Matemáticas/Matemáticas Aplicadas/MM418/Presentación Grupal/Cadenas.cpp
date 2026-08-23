#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declaración de una cadena
    string cadena = "Hola, mundo!";

    // Declaración de un caracter
    char caracter = '?';

    // Imprimir la cadena en la consola
    cout << "La cadena es: " << cadena << endl;

    // Acceder a un caracter específico de la cadena
    cout << "El caracter en la posición 7 es: " << cadena[7] << endl;

    // Modificar un caracter de la cadena
    cadena[11] = caracter;
    cout << "La cadena modificada es: " << cadena << endl;


    // Longitud de la cadena
    cout << "La longitud de la cadena es: " << cadena.length() << endl;
    cout << "La longitud de la cadena es: " << cadena.size() << endl;

    // Agregar texto al final
    cadena.append(" ¿Cómo estás?");
    cout << "La cadena después de agregar texto es: " << cadena << endl;

    cadena += " ¡Bienvenido!";
    cout << "La cadena después de agregar más texto es: " << cadena << endl;

    // Encontrar una subcadena
    int posicion = cadena.find("mundo");
    cout << "La palabra 'mundo' se encuentra en la posición: " << posicion << endl;

    int posicion2 = cadena.find("adiós");
    cout << "La palabra 'adiós' se encuentra en la posición: " << posicion2 << endl; 
    // Imprime -1 si no se encuentra la subcadena
    // aunque como tal retorna `string::npos`

    // Extraer una subcadena
    string subcadena = cadena.substr(6, 5); // Extrae 5 caracteres a partir de la posición 7
    cout << "La subcadena extraída es: " << subcadena << endl;

    // Elimina sub cadenas
    cadena.erase(4, 7); // Elimina 7 caracteres a partir de la posición 4
    cout << "La cadena después de eliminar la subcadena es: " << cadena << endl;

    // Sustitución de texto
    cadena.replace(0, 5, "Bonjour"); // Sustituye 5 caracteres a partir de la posición 0 por "Bonjour"
    cout << "La cadena después de la sustitución es: " << cadena << endl;

    string cadena2 = "Hola";
    string cadena3 = "hola";

    // Comparación de cadenas
    if (cadena2 == cadena3) {
        cout << "Las cadenas (" << cadena2 << " y " << cadena3 << ") son iguales." << endl;
    } else {
        cout << "Las cadenas (" << cadena2 << " y " << cadena3 << ") son diferentes." << endl;
    }

    if (cadena2 == "Hola") {
        cout << "La cadena (" << cadena2 << ") es igual a 'Hola'." << endl;
    } else {
        cout << "La cadena (" << cadena2 << ") es diferente de 'Hola'." << endl;
    }

    // Acceso fuera de rango
    // cout << "Intentando acceder a un caracter fuera de rango: " << cadena[100] << endl; 
    // ! Esto puede causar un comportamiento indefinido

    // Extra
    // Declaración de una cadena de caracteres (C)
    // char* cadenaCHAR = "Hola, mundo!";
    // char cadenaCHAR[] = "Hola, mundo!"; // Exactamente lo mismo
    // cout << "La cadena es: " << cadenaCHAR << endl;

    return 0;
}