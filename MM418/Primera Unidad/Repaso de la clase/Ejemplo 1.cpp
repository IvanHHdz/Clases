#include <iostream>

using namespace std;

int main() {
  // declaración de un arreglo
  int numeros[] = {5, 2, 6, 5, 4, 6, 5, 6, 5, 65, 6, 5};
  // notemos que tambien podriamos declarar la cantidad de elementos que tendrá
  // aunque en este caso es innecesario ya que se infiere que serán 11
  // en cuyo caso se declararía como
  // ```
  // int numeros[11];
  // ```
  // y luego podría llenarse.
  // de igual forma, si se desea reservar más memoria, puede hacerse un
  // ```
  // int numeros[n]
  // ```
  // donde n sea un entero constante.

  // asignacion de un nuevo valor
  numeros[1] = 3;

  // lee un valor y lo guarda en el arreglo, en la posición 3
  cin >> numeros[3];

  // imprime un valor, el del elemento 4
  cout << numeros[4];

  // imprime todos los valores
  for (int i = 0; i < 12; i++) {
    cout << numeros[i] << '\t';
  }
  cout << endl;

  // el ejemplo original también incluía cosas como asignación dentro del for
  // para asignar todos, lectura de uno a uno para reescribir todos manualmente,
  // y reescritura de cada uno a valores aleatorios.
  // sin embargo, me ha parecido innecesario realizar todo eso aquí
  // pues es trivial.

  return 0;
}
