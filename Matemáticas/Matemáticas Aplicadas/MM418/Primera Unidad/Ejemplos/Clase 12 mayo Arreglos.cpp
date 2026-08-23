
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int main() {
  // declaracion
  int numeros[10] = {
      5, 2, 6, 5,  4, 6,
      5, 6, 5, 65, 6, 5}; // reservando en memoria 10 espacios para entero
  // numeros[1]=3;//asignacion al elemento 1 el valor 3
  // cin>>numeros[3];//lectura del elemento en la posicion 3
  // cout<<numeros[3];//escritura
  for (int i = 0; i < 10; i++) // imprime los elementos desde 0 a 9
    cout << numeros[i] << '\t';
  cout << '\n';
  for (int i = 0; i < 10; i++) // asignacion o lectura
    numeros[i] = i * i;
  for (int i = 0; i < 10; i++) // imprime los elementos desde 0 a 9
    cout << numeros[i] << '\t';
  /*    for(int i=0;i<10;i++)//asignacion o lectura
          cin>>numeros[i];
     for(int i=0;i<10;i++)//imprime los elementos desde 0 a 9
          cout<<numeros[i]<<'\t';
    */
  srand(time(0));
  cout << '\n';
  for (int i = 0; i < 10; i++) // genera numeros aleatorios
    numeros[i] = 1 + rand() % 50;
  for (int i = 0; i < 10; i++) // imprime los elementos desde 0 a 9
    cout << numeros[i] << '\t';
  return 0;
}
