/*
Escribe un programa en C++ que genere un vector de $n$ enteros aleatorios en el
rango $\[1, 50\]$. Implementa una función de busqueda secuencial que reciba el
vector, la clave a buscar y un vector de posiciones donde guardara todos los
índices donde se encontró la clave. Imprime los elementos del vector original
utilizando los índices almacenados en posiciones para verificar la exactitud.
Añade un contador comparaciones para registrar cuántas veces estuvo en el ultima
posicion. Ejecuta el programa para $𝑛 = 100, 1,000 y 10,000$ e indica si el
número de comparaciones depende del valor buscado.
*/

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>
using namespace std;

// esta función agrega al vector n números aleatorios
void llenar_vector(vector<int> &vec, int n) {
  for (int i = 0; i < n; i++) {
    vec.push_back(rand() % 50 + 1);
  }
}

// esta función imprime el vector
void imprimir_vector(vector<int> vec) {
  cout << "(";
  for (int i : vec) {
    cout << i << ", ";
  }
  cout << ")" << endl;
}

// esta función busca en el vector vec la clave c y agrega las posiciones al
// vector pos
void busquedasecuencia(vector<int> &vec, int c, vector<int> &pos) {
  int comparaciones = 0;
  for (int i = 0; i < vec.size(); i++) {
    comparaciones++;
    if (vec[i] == c) {
      pos.push_back(i);
    }
  }
  cout << "Se realizaron " << comparaciones
       << " comparaciones para encontrar todas las coincidencias con " << c
       << " en el vector. Encontrando un total de " << pos.size()
       << " coincidencias." << endl;
}

// imprime los valores de vec en las posiciones de pos
void imprimir_encuentros(vector<int> vec, vector<int> pos) {
  cout << "Coincidencias: ";
  for (int i : pos) {
    cout << "(" << i << ": " << vec[i] << ") --- ";
  }
  cout << "|" << endl;
}

int main() {
  srand(time(0));
  int casos[] = {100, 1000, 10000};

  int clave = 16;

  for (int n : casos) {
    vector<int> vec;
    vector<int> pos;

    cout << "Este es el caso con n = " << n << endl;

    llenar_vector(vec, n);

    busquedasecuencia(vec, clave, pos);
    cout << "Estas son las posiciones en las que está el número buscado: ";
    imprimir_vector(pos);

    cout << "Esta es la verificación: ";
    imprimir_encuentros(vec, pos);

    cout << endl;
  }
  return 0;
}

/*
 * No existe ninguna relación entre el número de comparaciones que se realizan y
 * el número buscado, pues al ser una busqueda secuencial de todas las
 * coincidencias está obligado a realizar la comparación en todos los elementos
 * del vector. Es decir, para un vector de n elementos, debe realizar n
 * comparaciones, independientemente del número que se esté buscando.
 */
