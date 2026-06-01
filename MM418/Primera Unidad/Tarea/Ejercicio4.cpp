#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

// el enum va aquí para que sea global
enum Categoria { BAJO, MEDIO, ALTO };

// esta función llena el arreglo con números aleatorios
void llenar_arr(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    arr[i] = 1 + rand() % 100;
  }
}

// esta función llena otro arreglo con la clasificación del primero
void clasificar_arr(int arr[], Categoria cat[], int n) {
  for (int i = 0; i < n; i++) {
    if (arr[i] <= 33) {
      cat[i] = BAJO;
    } else if (arr[i] <= 66) {
      cat[i] = MEDIO;
    } else {
      cat[i] = ALTO;
    }
  }
}

// esta función imrpime el número junto a su categoría
void mostrar_catg(int arr[], Categoria cat[], int n) {
  cout << "Número" << '\t' << "Categoría" << endl;
  for (int i = 0; i < n; i++) {
    cout << arr[i] << '\t'
         << (cat[i] == BAJO ? "BAJO" : (cat[i] == MEDIO ? "MEDIO" : "ALTO"))
         << endl;
  }
  cout << endl;
}

// esta función cuenta e imprime el conteo de las categorías
void contar_catg(Categoria cat[], int n) {
  int bajo = 0, medio = 0, alto = 0;
  for (int i = 0; i < n; i++) {
    if (cat[i] == BAJO) {
      bajo++;
    } else if (cat[i] == MEDIO) {
      medio++;
    } else {
      alto++;
    }
  }
  cout << "Tenemos un total de:\n- BAJO: " << bajo << "\n- MEDIO: " << medio
       << "\n- ALTO: " << alto << endl
       << endl;
}

int main() {
  srand(time(0));
  int n;

  cout << "Ingrese el tamaño del arreglo: ";
  cin >> n;

  if (n < 0) {
    cout << "Tamaño inválido." << endl;
    return 1;
  }

  int *arr = new int[n];
  Categoria *clas = new Categoria[n];

  llenar_arr(arr, n);

  clasificar_arr(arr, clas, n);

  mostrar_catg(arr, clas, n);

  contar_catg(clas, n);

  return 0;
}
