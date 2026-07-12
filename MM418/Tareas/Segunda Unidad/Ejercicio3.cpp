#include <cmath>
#include <iostream>
#include <ostream>
using namespace std;

void ordenar(double arr[], int largo = 3) {
  for (int i = 0; i < largo; i++) {
    for (int j = 1; j < largo; j++) {
      if (arr[j - 1] > arr[j]) {
        double v = arr[j];
        arr[j] = arr[j - 1];
        arr[j - 1] = v;
      }
    }
  }
}

class Punto {
public:
  double x;
  double y;

  Punto(double a, double b) {
    x = a;
    y = b;
  }

  double distancia(Punto p) { return sqrt(pow(p.x - x, 2) + pow(p.y - y, 2)); }

private:
};

class Triangulo {
public:
  double lado1, lado2, lado3;

  Triangulo(double a = 1, double b = 1, double c = 1) { setLados(a, b, c); }

  Triangulo(Punto p1, Punto p2, Punto p3) {
    double a = p1.distancia(p2);
    double b = p1.distancia(p3);
    double c = p2.distancia(p3);

    setLados(a, b, c);
  }

  void setLados(double a = 1, double b = 1, double c = 1) {
    if (!((a + b > c) && (a + c > b) && (b + c > a))) {
      cout << "Los valores de los lados ingresados no son válidos\nNo existe "
              "un triángulo con tales medidas.\nSe usaran los valores "
              "predeterminados."
           << endl;
      a = b = c = 1;
    }
    lado1 = a;
    lado2 = b;
    lado3 = c;
  }

  double area() {
    // usaremos la Fórmula de Herón
    double s = (lado1 + lado2 + lado3) / 2;

    return sqrt(s * (s - lado1) * (s - lado2) * (s - lado3));
  }

  friend ostream &operator<<(ostream &salida, const Triangulo triangulo) {
    salida << "Lados del triángulo: {" << triangulo.lado1 << ", "
           << triangulo.lado2 << ", " << triangulo.lado3 << "}";
    return salida;
  }

  bool operator==(Triangulo otroTriangulo) {
    // ordenamos
    double t1[] = {lado1, lado2, lado3};
    double t2[] = {otroTriangulo.lado1, otroTriangulo.lado2,
                   otroTriangulo.lado3};

    ordenar(t1);
    ordenar(t2);

    return t1[0] * t2[1] == t1[1] * t2[0] && t1[0] * t2[2] == t1[2] * t2[0];
  }

private:
};

int main() {
  Triangulo t1 = Triangulo();
  Triangulo t2 = Triangulo(5, 3, 4);
  Triangulo t3 = Triangulo(Punto(0, 0), Punto(6, 0), Punto(0, 8));

  cout << t1 << endl;
  cout << t2 << endl;
  cout << t3 << endl;

  cout << "Ls triangulos t1 y t2 "
       << (t1 == t2 ? "son semejantes" : "no son semejantes") << endl;
  cout << "Ls triangulos t2 y t3 "
       << (t2 == t3 ? "son semejantes" : "no son semejantes") << endl;

  return 0;
}
