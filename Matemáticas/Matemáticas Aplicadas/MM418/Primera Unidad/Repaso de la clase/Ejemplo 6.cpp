// juego de piedra papel o tijera
//
// el programa utiliza un enum para identificar los distintos valores que puede
// tomar (piedra, papel o tijera).
// así es un poco más legible el código

#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() {
  enum { piedra, papel, tijera };

  int jugador, computador, juegos = 5;

  srand(time(0));

  for (; juegos > 0; juegos--) {
    cout << "Ingrese su mano (piedra, papel, tijera): ";
    cin >> jugador;

    if (jugador > 2) {
      juegos++;
      cout << "Ha ingresado un valor inválido!\nVuelva a intentarlo." << endl;
      continue;
    }

    computador = rand() % 3;

    cout << "El jugador eligió: "
         << (jugador == papel    ? "papel"
             : jugador == piedra ? "piedra"
                                 : "tijera")
         << endl;
    cout << "El computador eligió: "
         << (computador == papel    ? "papel"
             : computador == piedra ? "piedra"
                                    : "tijera")
         << endl;

    if (jugador == computador) {
      cout << "Por lo tanto, es un empate!" << endl;
      continue;
    } else {
      if ((jugador == piedra && computador == tijera) ||
          (jugador == papel && computador == piedra) ||
          (jugador == tijera && computador == papel)) {
        cout << "El jugador ha ganado!" << endl;
        continue;
      } else {
        cout << "El computador ha ganado..." << endl;
        continue;
      }
    }
  }

  return 0;
}
