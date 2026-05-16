//programa para calcular la media y desviacion estandar de un conjunto de datos
//a partir de un arreglo de datos de tamaño constante
#include<cmath>
#include <iostream>
using namespace std;
int main()
{
    const int n=6;
    float datos[n];
    float suma=0, media, desviacion, sumacuadrados=0;
    for(int i=0;i<n;i++){
        cout<<"Ingrese el elemento "<<i<<" del arreglo";
        cin>>datos[i];
        suma=datos[i]+suma;
    }
    media=suma/n;
    cout<<"El valor de la media es: "<<media<<endl;
    //suma de los cuadradados de la diferencia de cada valor con la media.
    for(int i=0;i<n;i++)
        sumacuadrados=sumacuadrados+pow(datos[i]-media,2);
    
    desviacion=sqrt(sumacuadrados/(n-1));
    cout<<"La desviacion estandar es: "<<desviacion<<endl;
    return 0;
}