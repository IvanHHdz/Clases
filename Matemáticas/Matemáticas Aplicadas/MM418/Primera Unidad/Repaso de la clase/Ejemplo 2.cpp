// este programa calculará la media y desviación estándar de un conjunto de
// datos este conjunto es de tamaño conocido constante que definiremos al
// principio

#include <cmath>
#include <iostream>

using namespace std;

int main() {
  const int n = 6;
  float datos[n];

  float suma = 0, media, desviacion, suma_cuadrados = 0;

  for (int i = 0; i < n; i++) {
    cout << "Ingrese el elemento " << i << " del arreglo de datos: ";
    cin >> datos[i];

    suma += datos[i];
  }

  media = suma / n;

  cout << "El valor de la media es: " << media << endl;

  for (int i = 0; i < n; i++) {
    suma_cuadrados += pow(datos[i] - media, 2);
  }

  desviacion = sqrt(suma_cuadrados / (n - 1));

  cout << "La desviación estándar es: " << desviacion << endl;

  return 0;
}
