

// hacer un programa que calcule la hipotenusa de un triangulo rectangulo.



#include <iostream>
#include<cmath>
using namespace std;
double hipotenusa(double cat1=1, double cat2=1 )
{
  double hip;
  hip=sqrt(pow(cat1,2)+pow(cat2,2));
  cout<<"La hipotenusa es"<<hip<<endl;////mala practica d eprogramacion imprimir lo mismo que devolvemos
  return hip;
}

//funcion que valida si 3 lados forman un triangulo rectangulo.
bool espitagoras(double cat1, double cat2, double hip)
{
    if(pow(hip,2)==pow(cat1,2)+pow(cat2,2))
    return true;
    else
    return false;
}

int main()
{
    double a,b,hip;
cout<<"ingresar los catetos";
cin>>a>>b;

double hab=hipotenusa(a,b);

    
cout<<"El valor de la hipotenusa es"<<hab<<endl;
cout<<"La hipotenusa de 3 y 4 es"<<hipotenusa(3,4)<<endl;
cout<<"la hipotenusa es"<<hipotenusa()<<endl;

if(espitagoras(a,b,hab))
    cout<<"El triangulo ab es rectangulo";
    else
    cout<<"El triangulo ab NO es rectangulo";
    return 0;
}