#include <iostream>
#include <ostream>
#include <string>
using namespace std;

class Libro {
public:
  // Funciones set
  void setAutor(string atr) { autor = atr; }
  void setTitulo(string ttl) { titulo = ttl; }

  void setEjemplares(int ejm) {
    if (ejm < 0) {
      cout << "Error, no es posible tener cantidad negativa de libros.\nSe "
              "asignará 0.";
      ejm = 0;
    }
    ejemplares = ejm;
  }

  // Constructor
  Libro(string ttl = " --- ", string atr = "Anónimo", int ejm = 0) {
    setTitulo(ttl);
    setAutor(atr);
    setEjemplares(ejm);
  }

  // Funciones get
  string getAutor() { return autor; }
  string getTitulo() { return titulo; }
  int getEjemplares() { return ejemplares; }

  bool operator==(const Libro otroLibro) {
    return (titulo == otroLibro.titulo) && (autor == otroLibro.autor);
  }

  Libro operator+(const Libro otroLibro) {
    if (*this == otroLibro) {
      return Libro(titulo, autor, (ejemplares + otroLibro.ejemplares));
    } else {
      return *this;
    }
  }

  friend ostream &operator<<(ostream &salida, Libro libro) {
    salida << "Título: " << libro.getTitulo() << endl
           << "Autor: " << libro.getAutor() << endl
           << "Ejemplares: " << libro.getEjemplares() << endl;
    return salida;
  }

private:
  string titulo;
  string autor;
  int ejemplares;
};

int main() {
  Libro l1 = Libro("Ficciones", "Jorge Luis Borges", 1);
  Libro l2 = Libro("Crimen y Castigo", "Fiódor Dostoievski", 3);
  Libro l3 = Libro("Ficciones", "Jorge Luis Borges", 2);

  cout << l1 << endl;
  cout << l2 << endl;
  cout << l3 << endl;

  cout << "l1 y l2 " << (l1 == l2 ? "son " : "no son ") << "el mismo libro."
       << endl;

  cout << (l1 + l3) << endl;
  return 0;
}
