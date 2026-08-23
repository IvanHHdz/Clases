#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

// Retorna la última ubicación de un elemento x.
// arr: arreglo
// n:   tamaño
// x:   valor
//
// Nota: si el valor no está en el arreglo, la función retorna -1
int ultima_ubicacion(int arr[], int n, int x) {
  int m = -1;
  for (int i = 0; i < n; i++) {
    if (arr[i] == x) {
      m = i;
    }
  }
  return m;
}

// llena el arreglo con números aleatorios
void llenar_arreglo(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    arr[i] = rand() % 101;
  }
}

// imprime un arreglo
void imprimir_arr(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << ", ";
  }
  cout << endl;
}

int main() {
  srand(time(0));

  const int n = 25;
  int arr[n] = {};
  int x;

  llenar_arreglo(arr, n);

  imprimir_arr(arr, n);

  cout << "Ingrese el valor que desea buscar: ";
  cin >> x;

  cout << "El valor solicitado está en la posición "
       << ultima_ubicacion(arr, n, x) << endl;

  return 0;
}
