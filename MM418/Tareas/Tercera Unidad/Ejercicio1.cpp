#include <iostream>
#include <string>

using namespace std;

class Estudiante {
protected:
  // atributos
  string nombre;
  long long int ncuenta;
  string carrera;

public:
  Estudiante(string n, long long int cuenta, string c) {
    nombre = n;
    ncuenta = cuenta;
    carrera = c;
  }

  void mostrarinfo_estudiante() {
    cout << "Nombre:\t\t" << nombre << "\nN. de Cuenta:\t" << ncuenta
         << "\nCarrera:\t" << carrera << endl;
  }
};

class Beca {
protected:
  string tipo_beca;
  double descuento;

public:
  Beca(string tipo, double desc) {
    tipo_beca = tipo;
    descuento = desc;
  }

  void mostrarinfo_beca() {
    cout << "Tipo de Beca:\t" << tipo_beca << "\nDescuento:\t" << descuento
         << '%' << endl;
  }
};

class EstudianteBecario : public Estudiante, public Beca {
public:
  EstudianteBecario(string name, long long int cuenta, string carr, string tipo,
                    double desc)
      : Estudiante(name, cuenta, carr), Beca(tipo, desc) {}

  void mostrarinfo() {
    mostrarinfo_estudiante();
    mostrarinfo_beca();
  }

  double calcularPago(double costoMatricula) {
    return costoMatricula * (1 - descuento / 100);
  }

  void actualizarBeca(string tipo, double porcentaje) {
    tipo_beca = tipo;
    descuento = porcentaje;
  }
};

int main() {
  Estudiante me = Estudiante("Lester Hernandez", 20242000637, "Matematicas");
  me.mostrarinfo_estudiante();

  cout << endl << endl;

  Beca mi_beca = Beca("Excelencia Académica C", 10);
  mi_beca.mostrarinfo_beca();

  cout << endl << endl;

  EstudianteBecario yo =
      EstudianteBecario("Lester Hernandez", 20242000637, "Matemáticas",
                        "Excelencia Académica B", 15);
  yo.mostrarinfo();
  cout << endl << "Me toca pagar:\tL." << yo.calcularPago(270) << endl << endl;
  yo.actualizarBeca("Excelecia Académica A", 25);
  yo.mostrarinfo();
}
