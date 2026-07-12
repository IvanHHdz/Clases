#include <iostream>
using namespace std;

void llenar_factorial(int f[], int l) {
  f[0] = 1;

  for (int i = 1; i < l; i++) {
    f[i] = i * f[i - 1];
  }
}

double sumar_serie(int n, int factorial[]) {
  double e = 1;
  for (int i = 1; i < n; i++) {
    e += 1.0 / factorial[i];
  }
  return e;
}

int main() {
  // Leer el valor de n
  int n;

  double e;

  cout << "Ingrese el valor de n hasta el cual desea calcular e por medio de "
          "la serie: ";
  cin >> n;

  if (n < 0) {
    cout << "El valor que ha ingesado no es válido." << endl;
    return 1;
  }

  n++;

  // Calcular los factoriales necesarios
  // Para no repetir calculos, los calcularemos todos juntos y los guardaremos
  // en un arreglo hasta n!

  int *factoriales = new int[n];

  llenar_factorial(factoriales, n);

  // Sumar cada término de la serie
  e = sumar_serie(n, factoriales);

  n--;

  cout << "El valor aproximado de e usando " << n
       << " términos de la serie es: " << e << endl;

  // liberamos la memoria antes de terminar el programa

  delete[] factoriales;

  return 0;
}
