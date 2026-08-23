// programa para determinar el maximo y minimo de un arreglo de datos
//aleatorios de  1 a100
// y que indique en cual indice esta cada uno.
#include <iostream>
#include <ctime>
#include<cstdlib>
using namespace std;
int main()
{
    const int n=10;
    int numeros[n];
    int max,min;
    srand(time(0));
    for(int i=0;i<n;i++)
        numeros[i]=1+rand()%101;
    for(int i=0;i<n;i++)
       cout<< numeros[i]<<'\t';
       cout<<endl;
    max=numeros[0];
    min=numeros[0];
    int indicemax=0,indicemin=0;// asumimos que el primer valor es el maximo y min.
    
    for(int i=1;i<n;i++)
    {
        if(numeros[i]>max)
        {
            max=numeros[i];
            indicemax=i;
        }
        if(numeros[i]<min)
         {
                min=numeros[i];
                indicemin=i;
         }
    }
    cout<<"EL numero mas grande es "<<max<<" en el indice "<<indicemax<<endl;
    cout<<"El numero mas pequeño es "<<min<<" en el indice "<<indicemin<<endl;
    
return 0;
}