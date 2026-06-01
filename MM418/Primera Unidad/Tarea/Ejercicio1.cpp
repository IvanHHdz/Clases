#include <iostream>
using namespace std;

// constante global para el tamaño
const int l = 8;

// repr_bin:  representación binaria
// arr:       arreglo
// n:         número
// l:         tamaño
void repr_bin(int arr[], int n) {
  for (int i = l - 1; i >= 0; i--) {
    if (n % 2 == 0) {
      arr[i] = 0;
    } else {
      arr[i] = 1;
      n -= 1;
    }
    n /= 2;
  }
}

// representación binaria con memoria dinámica
void din_repr_bin(int arr[], int n, int len) {
  for (int i = len - 1; i >= 0; i--) {
    if (n % 2 == 0) {
      arr[i] = 0;
    } else {
      arr[i] = 1;
      n -= 1;
    }
    n /= 2;
  }
}

// función para mostrar el arreglo
void mostrar_arreglo(int arr[], int len) {
  for (int i = 0; i < len; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {

  // con tamaño fijo
  cout << "# Tamaño Fijo" << endl;
  int arr[l] = {};
  int numero = 33;

  mostrar_arreglo(arr, l);

  repr_bin(arr, numero);

  mostrar_arreglo(arr, l);

  cout << endl;

  // con memoria dinámica
  cout << "# Memoria Dinámica" << endl;

  int numero2 = 777;
  int size = 10;
  int *arreglo = new int[size];
  // note que podríamos utilizar una función para calcular el tamaño necesario
  // haciendo uso del logaritmo de 2

  din_repr_bin(arreglo, numero2, size);

  mostrar_arreglo(arreglo, size);

  delete[] arreglo;

  return 0;
}
