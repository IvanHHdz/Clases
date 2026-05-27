/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

//programa de juego de piedra papel o tijera.
int main()
{
    enum  {piedra, papel, tijera};
    
    int manojugador,manocompu,juegos=5;
    
    do{
        cout<<"Lance su mano 0 piedra, 1 papel, 2 tijera \n";
        cin>>manojugador;
        if(manojugador>2)
        {
            cout<<"Error ingresaste mal la mano \n";
            continue;
        }
        manocompu= rand()%3;// se elige aleatoriamente la mano de computadora
        cout<<"Jugador tiro ";
        cout<<((manojugador==piedra)?"Piedra":(manojugador==tijera)?"Tijera":"Papel");
        cout<<" computadora tiro "<<((manocompu==piedra)?"Piedra":(manocompu==tijera)?"Tijera":"Papel");
        cout<<endl;
        
        if(manojugador==manocompu)
            cout<<"Empate ambos sacaron la misma mano \n";
        if((manojugador==piedra and manocompu==tijera) or (manojugador==papel and manocompu== piedra) or  (manojugador==tijera and manocompu==papel))
            cout<<"Ganaste tu \n";
        
        if((manojugador==tijera and manocompu==piedra) or (manojugador==piedra and manocompu== papel) or  (manojugador==papel and manocompu==tijera))
            cout<<"Gana la computadora \n";
        juegos--;
    }while(juegos>0);
    cout<<"Juego finalizado";
    return 0;
}