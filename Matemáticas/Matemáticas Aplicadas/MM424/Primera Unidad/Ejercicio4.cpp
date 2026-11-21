/*
Codifica dos versiones del algoritmo de la Burbuja:
   1. Versión A (Tradicional): Ejecuta siempre $𝑛 − 1$ pasadas completas.
   2. Versión B (Optimizada): Utiliza una variable booleana `huboIntercambio`
para detener el algoritmo si en una pasada no se realiza ningún cambio.

Prueba ambos algoritmos sobre un arreglo "casi ordenado" (donde solo 2 elementos
adyacentes están fuera de lugar). Muestra cómo la versión optimizada reduce el
número de comparaciones de Θ(𝑛2) a Θ(𝑛) en entradas casi ordenadas.
*/

#include <iostream>
using namespace std;

// Burbuja clásica: siempre ejecuta n - 1 pasadas completas.
void burbuja_trad(int arr[], int n) {
  int pasos = 0;
  for (int pasada = 0; pasada < n - 1; pasada++) {
    for (int i = 0; i < n - 1; i++) {
      pasos++;
      if (arr[i] > arr[i + 1]) {
        int temporal = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temporal;
      }
    }
  }
  cout << "Pasos clasica: " << pasos << endl;
}

// Burbuja optimizada: termina cuando una pasada no realiza intercambios.
void burbuja_opt(int arr[], int n) {
  int pasos = 0;
  int limite = n - 1;
  bool huboIntercambio = true;

  while (limite > 0 && huboIntercambio) {
    huboIntercambio = false;

    for (int i = 0; i < limite; i++) {
      pasos++;
      if (arr[i] > arr[i + 1]) {
        int temporal = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temporal;
        huboIntercambio = true;
      }
    }

    limite--;
  }

  cout << "Pasos optimizada: " << pasos << endl;
}

// para imprimir el arreglo
void imprimir_arreglo(const int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  // ejemplo de un arreglo casi ordenado
  int arr1[] = {1, 2, 3, 4, 5, 7, 6, 8, 9, 10};
  int arr2[] = {1, 2, 3, 4, 5, 7, 6, 8, 9, 10};
  int n = 10;

  cout << "Arreglo inicial: ";
  imprimir_arreglo(arr1, n);

  burbuja_trad(arr1, n);

  cout << "\nArreglo ordenado: ";
  imprimir_arreglo(arr1, n);

  cout << "\nBurbuja optimizada" << endl;
  cout << "Arreglo inicial: ";
  imprimir_arreglo(arr2, n);

  burbuja_opt(arr2, n);

  cout << "Arreglo ordenado: ";
  imprimir_arreglo(arr2, n);

  /*
  como podemos ver con este ejemplo con arreglos de tamaño 10, el algortmo
  clásico le toma 81, que es casi n^2 mientras que el caso optimizado le toma
  casi 10, es decir, casi n. claro, esto solo en arreglos casi ordenados, pues
  ambos son O(n^2)
  */

  return 0;
}
