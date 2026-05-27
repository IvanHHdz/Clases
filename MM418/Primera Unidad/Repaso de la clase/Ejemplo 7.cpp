// nociones básicas de punteros
//
// básicamente, se entiende que un puntero contiene una dirección de memoria
// siendo que toda variable debe estar en memoria y tener una dirección
// por lo que incluso el propio puntero puede debe tener una dirección de
// memoria. pudiendo así tener punteros de punteros de punteros...
//
// Beej lo explicaba con casas, un toda variable se entiende como una casa, en
// la que puede haber cosas. Así, un puntero sería un papel con la dirección de
// una casa.
//
// También se puede entender como casilleros.
//
// Entonces todo casillero tiene un número, y un casillero puede tener algo
// dentro. Un papel puede tener un número y ese número ser la dirección de un
// casillero. Ese papel se guardaría en otro casillero. Así, los casilleros
// serían espacios en memoria.

#include <iostream>

using namespace std;

int main() {
  int casillero = 23;

  int *papel = &casillero;

  // siguiendo la analogía, podemos seguir la dirección en el puntero para
  // llegar a la variable (siendo como buscar el casillero anotado) o ver la
  // dirección en memoria (leer el número del papel)
  cout << "el valor en el casillero " << papel << " es: " << *papel << endl;

  return 0;
}

// he omitido el que debería ser el siguiente ejemplo, en el que se debería
// mostrar un ejemplo usando punteros como parámetros, ya que me dio pereza.
//
// básicamente es lo mismo, se pasa no el valor o una copia de él, sino solo la
// dirección donde está.
//
// por lo que si se manipula el valor dentro de esa dirección, se manipula en
// cualquier scope lo que permite mandar estructuras u objetos como parámetros
// sin consumir recursos copándolos
//
// por lo que tengo entendido estos dos ejemplos llegarían hasta aquí
// aún así, es importante mencionar que si no se siguen viendo punteros más
// adelante (probablemente sí se vean) se sugiere revisar los capítulos sobre
// punteros de la guía de Beej sobre C. si bien el libro es sobre C, es
// extendible a C++.
