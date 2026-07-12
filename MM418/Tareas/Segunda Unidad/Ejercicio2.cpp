#include <cmath>
#include <iostream>
using namespace std;

class Complejo {
private:
  double re;
  double im;

public:
  Complejo(double real = 1, double imaginario = 0) {
    re = real;
    im = imaginario;
  }

  double real() { return re; }
  double imaginario() { return im; }

  double modulo() { return sqrt(re * re + im * im); }

  // sobrecarga para el módulo
  double operator~() { return modulo(); }

  // sobrecarga para el conjugado
  Complejo operator!() { return Complejo(re, -im); }

  // función que determina la dirección (ángulo)
  double direccion() { return atan(im / re); }

  // sobrecarga de la suma
  Complejo operator+(const Complejo z) {
    return Complejo(re + z.re, im + z.im);
  }

  // sobrecarga de la suma
  Complejo operator-(const Complejo z) {
    return Complejo(re - z.re, im - z.im);
  }

  // sobrecarga de la multiplicación
  Complejo operator*(const Complejo z) {
    return Complejo(re * z.re - im * z.im, re * z.im + im * z.re);
  }

  friend ostream &operator<<(ostream &salida, const Complejo entrada) {
    salida << entrada.re << (entrada.im >= 0 ? "+" : "") << entrada.im << "i";
    return salida;
  }
};

Complejo sumar(Complejo valores[], int cantidad) {
  Complejo suma = Complejo(0, 0);
  for (int i = 0; i < cantidad; i++) {
    suma = suma + valores[i];
  }
  return suma;
}

int main() {
  Complejo z = Complejo(1, 2);
  Complejo w = Complejo(2, 3);

  // Funciones básicas
  cout << "Funciones básicas" << endl;
  cout << z << endl << w << endl << endl;
  cout << !z << endl;
  cout << ~z << endl;
  cout << z.direccion() << endl << endl;

  // Operaciones
  cout << "Operaciones" << endl;
  cout << z + w << endl;
  cout << z - w << endl;
  cout << z * w << endl << endl;

  // Comprobando identidades
  cout << "z + Conj(z) = 2 Re(z)" << endl;
  cout << z + !z << " = " << 2 * z.real() << endl << endl;

  cout << "z - Conj(z) = 2 i Im(z)" << endl;
  cout << z - !z << " = " << Complejo(0, 2 * z.imaginario()) << endl << endl;

  // Arreglo de complejos
  Complejo v[] = {w, z, Complejo(), Complejo(1, 1)};
  cout << sumar(v, 4) << endl;
  return 0;
}
