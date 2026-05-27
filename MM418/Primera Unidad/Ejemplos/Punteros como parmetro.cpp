//programa que ordena datos a partir una funcion, dond elos intercambios e haran usando apuntadores.
#include <iostream>
const int n=10;
void intercambiar(int *a, int *b )
{
   int aux=*a;
   *a=*b;
   *b= aux;
}
void ordenar(int arreglo[])
{
    for(int i=0; i<n-1;i++)// recorridos por el arreglo
    {
        for(int j=0;j<n-1;j++)
        {
            if(arreglo[j]>arreglo[j+1])
            {
                intercambiar(&arreglo[j],&arreglo[j+1]);
            }
        }
    }
}
using namespace std;
void imprimir(int arreglo[])
{
    for(int i=0;i<n;i++)
        cout<<arreglo[i]<<'\t';
    cout<<endl;
}
int main()
{
    
    int numeros[10]={2,4,5,13,1,6,7,6,8,9};
    
    imprimir(numeros);
    ordenar(numeros);
    cout<<"Arreglo ordenado"<<endl;
    imprimir(numeros);
    return 0;
}