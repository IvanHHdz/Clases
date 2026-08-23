// un programa que genera un arreglo de números aleatorios y luego lo imprime
// y luego busca si ese arreglo contiene cierto valor x
// todo por funciones

#include <cstdlib>
#include <iostream>

using namespace std;

// tamaño del arreglo
const int s = 10;

// prototipos
int randomint(int max = 100, int min = 0);
void arreglo_aleatorio(int arr[], int max = 100, int min = 0);
void show_arr(int arr[]);
bool encontrar_x(int arr[], int x);

int main() {
  srand(time(0));

  int arr[s] = {};

  arreglo_aleatorio(arr);

  show_arr(arr);

  cout << "El arreglo " << (encontrar_x(arr, 23) ? "sí" : "no")
       << " contiene el número 23!" << endl;

  return 0;
}

int randomint(int max, int min) {
  if (min >= max) {
    cout << "ERROR\nNo es posible generar un número aleatorio en ese rango."
         << endl;
    return -1;
  }
  return min + rand() % (max - min + 1);
}

void arreglo_aleatorio(int arr[], int max, int min) {
  for (int i = 0; i < s; i++) {
    arr[i] = randomint(max, min);
  }
}

void show_arr(int arr[]) {
  for (int i = 0; i < s; i++) {
    cout << arr[i] << ", ";
  }
  cout << endl;
}

bool encontrar_x(int arr[], int x) {
  for (int i = 0; i < s; i++) {
    if (arr[i] == x) {
      return true;
    }
  }
  return false;
}
