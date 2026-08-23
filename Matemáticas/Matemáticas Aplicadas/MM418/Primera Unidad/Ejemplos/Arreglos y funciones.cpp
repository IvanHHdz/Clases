// hacer un programa que genere numeros aleatorios en un arreglo, los imprima
//y luego apartir de un valor x, lo busque en el arreglo y diga si esta o no el.
// hacer una funcion que genere numeros aleatorios;
#include <iostream>
#include<cstdlib>
#include<ctime>
  const int n=30;
  using namespace std;
 int randomc(int min=1, int max=100)
 { 
     if(min>=max)
     {
         cout<<"el menor no debe ser mas grande que el maximo, se reasignaran los valores"<<endl;
         min=1;
         max=100;
     }
     return min+rand()%(max+1);
 }
  
void generanumeros(int arreglo[])
{
        for(int i=0;i<n;i++)
            arreglo[i]= randomc(4,20);
}
void imprimearreglo(int arreglo[])
{
    for(int i=0;i<n;i++)
     cout<<arreglo[i]<<'\t';
     cout<<endl;
}
bool busquedax(int arreglobusca[], int x)
{
    for(int i=0;i<n;i++)
    {
        if(arreglobusca[i]==x){
        return true;
        }
    }
    return false;
}

void evaluabusqueda(bool busqueda)
{
    if(busqueda)
        cout<<"El valor  esta en el arreglo";
    else
        cout<<"El valor  No esta esta el arreglo";
}
int main()
{
  srand(time(0));
    int array_random[n]={};// genera un arreglo de tam 10 con ceros.
    imprimearreglo(array_random);
    generanumeros(array_random);
    imprimearreglo(array_random);
    int x=5;
    evaluabusqueda(busquedax(array_random,x));
    
    //system("PAUSE");
    //system("CLEAR");
    int array2[n];
    generanumeros(array2);
    imprimearreglo(array2);
    evaluabusqueda(busquedax(array2,20));
    return 0;
}




