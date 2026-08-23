#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

// esta función llena el arreglo con números aleatorios
void llenar_arr(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    arr[i] = 1 + rand() % 100;
  }
}

void imprimir_matriz_ti(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i >= j) {
        cout << arr[(i * (i + 1)) / 2 + j];
      } else {
        cout << 0;
      }
      cout << '\t';
    }
    cout << endl;
  }
}

int main() {
  srand(time(0));
  int n, s;

  cout << "Ingrese el tamaño de una matriz cuadrada: ";
  cin >> n;

  s = (n * (n + 1)) / 2;
  int *matriz_t = new int[s];

  llenar_arr(matriz_t, s);

  imprimir_matriz_ti(matriz_t, n);

  delete[] matriz_t;

  return 0;
}
