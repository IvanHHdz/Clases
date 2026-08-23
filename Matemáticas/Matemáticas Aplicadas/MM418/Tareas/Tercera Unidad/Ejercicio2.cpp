#include <cmath>
#include <iostream>
using namespace std;

class Figura3D {
private:
  double altura;

public:
  Figura3D(double alt = 1) { set_altura(alt); }

  void set_altura(double alt) {
    if (altura > 0) {
      altura = alt;
    } else {
      cout << "Altura inválida, asignando valor por defecto: 1" << endl;
      altura = 1;
    }
  }

  double get_altura() { return altura; }

  virtual double calcularVolumen() = 0;

  virtual void imprimirDatos() { cout << "Altura:\t" << altura << endl; }
};

class Cilindro : public Figura3D {
private:
  double radio;

public:
  Cilindro(double alt, double rad) : Figura3D(alt) { set_radio(rad); }

  void set_radio(double rad) {
    if (rad > 0) {
      radio = rad;
    } else {
      cout << "Radio inválida, asignando valor por defecto: 1" << endl;
      radio = 1;
    }
  }

  double get_radio() { return radio; }

  double calcularVolumen() override {
    return M_PI * pow(get_radio(), 2) * get_altura();
  }

  void imprimirDatos() override {
    cout << "Altura:\t" << get_altura() << "\nRadio:\t" << get_radio() << endl;
    cout << "Área de la base:\t" << M_PI * pow(get_radio(), 2)
         << "\nVolumen:\t\t" << calcularVolumen() << endl;
  }
};

int main() {
  Cilindro mi_cili = Cilindro(28, 5);

  mi_cili.imprimirDatos();
}
