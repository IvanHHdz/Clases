#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

// devuelve un número aleatorio entre 1 y 6
int lanzardado() { return 1 + rand() % 6; }

// devuelve la suma del lanzamiento de dos dados
int lanzar_2_dados() {
  int dado1 = lanzardado();
  int dado2 = lanzardado();
  return dado1 + dado2;
}

void analisis(int d1[], int d2[], int suma[], int n) {
  int iguales = 0, suma_par = 0, s7 = 0;
  for (int i = 0; i < n; i++) {
    if (d1[i] == d2[i]) {
      iguales++;
    }
    if (suma[i] % 2 == 0) {
      suma_par++;
    }
    if (suma[i] == 7) {
      s7++;
    }
  }
  cout << "Hubieron:\n"
       << iguales << " lanzamientos donde los dados fueron iguales.\n"
       << suma_par
       << " lanzamientos cuya suma fue par.\nEl porcentaje de lanzamientos "
          "donde la suma fue 7 es del "
       << ((s7 * 100.0) / n) << "%, ocurriendo aquí " << s7 << " veces."
       << endl;
}

int main() {
  srand(time(0));

  int n;

  cout << "Ingrese el número de lanzamientos a realizar: ";
  cin >> n;

  int *dados1 = new int[n];
  int *dados2 = new int[n];
  int *suma_dados = new int[n];

  for (int i = 0; i < n; i++) {
    int dado1 = lanzardado();
    int dado2 = lanzardado();

    dados1[i] = dado1;
    dados2[i] = dado2;
    suma_dados[i] = dado1 + dado2;
    // nota: no utilizo la funció de `lanzar_2_dados` porque devolvería la suma
    // de otros dos lanzamientos aleatorios, no necesariamente los ya realizados
  }

  analisis(dados1, dados2, suma_dados, n);

  return 0;
}
