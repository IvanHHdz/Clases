#include <cmath>
#include <iostream>

using namespace std;

double hipotenusa(double a, double b);
bool teoremaPitagoras(double a, double b, double c);

int main() {
  double a, b, hip, c;

  cout << "Ingrese el valor de los catetos: ";
  cin >> a >> b;

  cout << "Ingrese la hipotenusa: ";
  cin >> c;

  hip = hipotenusa(a, b);

  cout << "El valor de la hipotenusa de un triangulo con catetos " << a << " y "
       << b << " es " << hip << endl;

  cout << "Resulta que si " << c << " es la hipotenusa y " << a << " y " << b
       << " los catetos, entonces "
       << (teoremaPitagoras(a, b, c) ? "es" : "no es")
       << " un triangulo rectangulo." << endl;

  return 0;
}

double hipotenusa(double a, double b) { return sqrt(pow(a, 2) + pow(b, 2)); }

bool teoremaPitagoras(double a, double b, double c) {
  return pow(c, 2) == pow(a, 2) + pow(b, 2);
}
