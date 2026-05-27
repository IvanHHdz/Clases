
#include <iostream>
using namespace std;
int main()
{
        int x =5;// declarando e incializando una variable entera
        int *ptr_x;// declarando el puntero pero no incializando.
        ptr_x=&x;// guardando la direccion de memoria de la variable x en el puntero ptr_x
        int y=10;
        cout<<"direccion de la variable x: "<<&x<<endl;
        cout<<"Valor del apuntador ptr_x:"<<ptr_x<<endl;
        cout<<"el valor de x ="<<x<<endl;
        cout<<"El valor de x a traves de el puntero ptr_x "<<*ptr_x<<endl;
        ptr_x=&y;//cambio el valor del puntero, ahora conoce la direccion de memoria de y
 cout<<"El valor de x a traves de el puntero ptr_x "<<*ptr_x<<endl;
        cout<<"Valor del apuntador ptr_x:"<<ptr_x<<endl;
        y=25;
         cout<<"El valor de x a traves de el puntero ptr_x "<<*ptr_x<<endl;


    return 0;
}