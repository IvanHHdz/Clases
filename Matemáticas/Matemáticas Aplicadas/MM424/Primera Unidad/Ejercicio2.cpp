/*
Implementa en C++ los algoritmos de evaluación de polinomios $𝑃(𝑥) = 𝑎_𝑛 𝑥^𝑛 +
\cdots + 𝑎_1 𝑥 + 𝑎_0$.

Método 1 (Término a término): Calcula cada $𝑎_𝑖 𝑥^𝑖$ de forma independiente
con un bucle anidado.

Método 2 (Regla de Horner): Evalúa el polinomio mediante multiplicaciones y
sumas anidadas consecutivas. Requisito de Análisis:Cuenta el número exacto de
multiplicaciones y sumas ejecutadas por cada método para un polinomio de grado
$𝑛$.

Muestra los datos mediante una tabla.
*/

#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

// el problema no especifica los valores de los coeficientes, por eso los
// colocaré de forma aleatoria y como enteros positivos pero, es fácil cambiarlo
// por coeficientes particulares, además que no cambia en el análisis del
// algoritmo como tal.
void llenar_arreglo(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    arr[i] = (rand() % 10) + 1;
  }
}

// Método 1
// x: valor a evaluar
// a[]: coeficientes
// n: grado del polinomio
long int termino_a_termino(int x, int a[], int n) {
  long int operaciones = 0;
  long int p = 0;
  for (int i = 0; i < n; i++) {
    long int x_i = 1;
    for (int j = 1; j <= i; j++) {
      x_i *= x;
      operaciones++;
    }
    operaciones++;
    p += a[i] * x_i;
  }
  cout << "Se llevaron a cabo " << operaciones
       << " operaciones con el método de término a termino." << endl;
  return p;
}

// Método 2
// x: valor a evaluar
// a[]: coeficientes
// n: grado del polinomio
long int regla_horner(int x, int a[], int n) {
  int operaciones = 0;
  long int b = a[n - 1];
  for (int i = n - 2; i >= 0; i--) {
    b *= x;
    b += a[i];
    operaciones += 2; // se realiza 1 suma y 1 resta
  }
  cout << "Se llevaron a cabo " << operaciones
       << " operaciones con el método de la regla de Horner." << endl;
  return b;
}

// para imprimir el polinomio
void imprimir_polinomio(int arr[], int n) {
  cout << "P(x) =";
  for (int i = n - 1; i >= 0; i--) {
    cout << " + " << arr[i] << "x^" << i;
  }
  cout << endl;
}

// solo usaré enteros porque es más cómodo
// y porque no se especifica si deben ser enteros o reales en general.
// al fin y al cabo estos dos algoritmos funcionan igual para ambos casos.
int main() {
  srand(time(0));

  // grado del polinomio
  // en realidad si el polinomio es grado N entonces n = N - 1
  int n = 7;

  // coeficientes del polinomio
  int a[n];
  llenar_arreglo(a, n);

  // valor a evaluar
  int x = 3;

  long int p = termino_a_termino(x, a, n);
  long int h = regla_horner(x, a, n);

  imprimir_polinomio(a, n);

  cout << "P(" << x << ") = " << p << endl;
  cout << "P(" << x << ") = " << h << endl;
  cout << endl << "Ejemplos: " << endl << endl;
  // Ahora un ejemplo con varios N para la tabla:
  for (int N = 1; N <= 10000; N *= 10) {
    int m = N - 1;
    int arr[m];
    llenar_arreglo(arr, m);
    int x_0 = 3;
    cout << "Para N = " << N << endl;
    termino_a_termino(x_0, arr, m);
    regla_horner(x_0, arr, m);
    cout << endl;
  }

  return 0;
}
