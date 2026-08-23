#include <iostream>
#include <vector>
using namespace std;

class Fraccion {
private:
  int numerador;
  int denominador;

public:
  Fraccion(int num = 1, int den = 1) {
    numerador = num;
    denominador = den;
  }

  void mostrar() { cout << numerador << "/" << denominador; }
};

class Termino {
private:
  Fraccion coeficiente;
  int exponente;

public:
  Termino(Fraccion coef, int exp) {
    coeficiente = coef;
    exponente = exp;
  }

  void mostrar() {
    coeficiente.mostrar();
    cout << " x^(" << exponente << ")";
  }
};

class Polinomio {
private:
  vector<Termino> terminos;

public:
  Polinomio(vector<Termino> terms) { terminos = terms; }

  void mostrar() {
    for (int i = 0; i < terminos.size(); i++) {
      if (i != 0) {
        cout << " + ";
      }
      terminos[i].mostrar();
    }
  }
};

int main() {
  Fraccion mi_frac = Fraccion(39, 4);
  mi_frac.mostrar();
  cout << endl << endl;

  Termino mi_term = Termino(mi_frac, 3);
  mi_term.mostrar();
  cout << endl << endl;

  Polinomio mi_pol = Polinomio({mi_term, Termino(Fraccion(13, 27), 2)});
  mi_pol.mostrar();
  cout << endl;

  return 0;
}
