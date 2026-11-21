/*
Dado un arreglo ordenado con elementos repetidos (ej. $1$, $2$, $4$, $4$, $4$,
$5$, $7$), implementa dos funciones basadas en Búsqueda Binaria. Devuelve el
primer índice donde aparece clave. Compara el conteo de pasos frente a una
solución ingenua que encuentra una ocurrencia y luego recorre linealmente hacia
la izquierda y derecha. Muestra en qué caso la solución ingenua degenera a
$𝑂(𝑛)$.
*/

#include <iostream>
using namespace std;

// Función que implementa la búsqueda binaria para encontrar el primer índice de
// un valor repetido
int busqueda_binaria_rep(int arr[], int val, int n) {
  int pasos = 0;
  int inf = 0;
  int sup = n - 1;
  int resultado = -1;
  while (inf <= sup) {
    int med = (inf + sup) / 2;
    if (arr[med] == val) {
      resultado = med;
      sup = med - 1;
    } else if (arr[med] < val) {
      inf = med + 1;
    } else {
      sup = med - 1;
    }
    pasos++;
  }
  cout << "Número de pasos realizados por la búsqueda binaria: " << pasos
       << endl;
  return resultado;
}

// Función ingenua que encuentra el primer índice de un valor repetido
int busqueda_ingenua(int arr[], int val, int n) {
  int pasos = 0;
  int inf = 0;
  int sup = n - 1;
  int resultado = -1;
  while (inf <= sup) {
    int med = (inf + sup) / 2;
    if (arr[med] == val) {
      resultado = med;
      while (resultado > 0 && arr[resultado - 1] == val) {
        resultado--;
        pasos++;
      }
      cout << "Número de pasos realizados por la busqueda ingenua: " << pasos
           << endl;
      return resultado;
    } else if (arr[med] < val) {
      inf = med + 1;
    } else {
      sup = med - 1;
    }
    pasos++;
  }
  return -1;
}

int main() {
  int arr[] = {1, 2, 3, 4, 4, 4, 4, 4, 4, 4, 4,  4, 4,
               4, 4, 4, 4, 5, 6, 7, 8, 9, 9, 10, 10};

  int n = 25;

  int val = 4;

  int index_binaria = busqueda_binaria_rep(arr, val, n);
  int index_ingenua = busqueda_ingenua(arr, val, n);

  cout << "El primer índice donde aparece según la busqueda binaria es " << val
       << " es: " << index_binaria << endl;
  cout << "El primer índice donde aparece según la busqueda ingenua es " << val
       << " es: " << index_ingenua << endl;

  return 0;
}

/*
note que el caso en el que se degeneral la busqueda ingenua es aquel en el que
se tiene un arreglo con muchos elementos (iguales al elemento buscado)
repetidos.

Por ejemplo, suponga que tiene un arreglo de 100 elementos y todos son iguales a
4, y usted está buscando precisamente el 4 (la primera aparición de 4).

Para el algoritmo ingenuo, encontrará a 4 en la posición 50, y luego tendrá que
recorrer hacia la izquierda hasta llegar a la posición 0, lo que le tomará 50
pasos adicionales. En total, el algoritmo ingenuo tomará 51 pasos para encontrar
la primera aparición de 4. Es decir, n/2 pasos, lo que es O(n).

Mientras que el algoritmo completamente binario encontrará a 4 primero en la
posición 50, y luego en la 25, luego en la 12, luego en la 6, luego en la 3,
luego en la 1 y finalmente en la 0. En total, el algoritmo binario tomará 7
pasos para encontrar la primera aparición de 4. Es decir, log(n) pasos, lo que
es O(log n).
*/
