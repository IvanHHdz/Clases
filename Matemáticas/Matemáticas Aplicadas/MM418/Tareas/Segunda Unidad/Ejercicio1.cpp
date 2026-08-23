#include <cmath>
#include <iostream>
using namespace std;

class Cuadrado {
public:
  // constructor con el valor del lado
  Cuadrado(double lado = 1) { setLado(lado); }

  // constructor con el valor del área o diagonal
  Cuadrado(double valor, bool dato) {
    if (dato) {
      if (valor < 0) {
        cout << "Área no válida, asignando con área = 1" << endl;
        valor = 1.;
      }
      double area = valor;
      setLado(sqrt(area));
    } else {
      double diagonal = valor;
      setLado(diagonal / sqrt(2.));
    }
  }

  void setLado(double lado) {
    if (lado > 0) {
      l = lado;
    } else {
      cout << "La valor del lado no es válido\nAsignando valor predeterminado."
           << endl;
      l = 1;
    }
  }

  double getLado() { return l; }

  double area() { return l * l; }

  double perimetro() { return 4 * l; }

private:
  double l;
};

int main() {
  Cuadrado cuadro1(10);
  cout << "El área de un cuadrado de lado " << cuadro1.getLado()
       << " es: " << cuadro1.area()
       << ". Y su perímetro es: " << cuadro1.perimetro() << endl;

  Cuadrado cuadro2(18.21, true);
  cout << "El área de un cuadrado de lado " << cuadro2.getLado()
       << " es: " << cuadro2.area()
       << ". Y su perímetro es: " << cuadro2.perimetro() << endl;

  Cuadrado cuadro3(7.3, false);
  cout << "El área de un cuadrado de lado " << cuadro3.getLado()
       << " es: " << cuadro3.area()
       << ". Y su perímetro es: " << cuadro3.perimetro() << endl;

  return 0;
}
