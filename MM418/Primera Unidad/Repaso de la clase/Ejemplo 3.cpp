#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main() {
  const int n = 10;
  int numeros[n];
  int maximo, minimo, i_max, i_min;

  srand(time(0));

  for (int i = 0; i < n; i++) {
    numeros[i] = 1 + rand() % 100;
  }

  for (int i = 0; i < n; i++) {
    cout << numeros[i] << '\t';
  }
  cout << endl;

  maximo = minimo = numeros[0];

  for (int i = 0; i < n; i++) {
    int v = numeros[i];
    if (v > maximo) {
      maximo = v;
      i_max = i;
    }
    if (v < minimo) {
      minimo = v;
      i_min = i;
    }
  }

  cout << "EL número mas grande es " << maximo << " en el indice " << i_max
       << endl;
  cout << "El número mas pequeño es " << minimo << " en el indice " << i_min
       << endl;

  return 0;
}
