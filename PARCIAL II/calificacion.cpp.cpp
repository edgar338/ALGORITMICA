//PROGRAMA: CALIFICACION

#include <iostream>

using namespace std;

int main()
{
float cal;

cout<<"Dime tu calificacion: ";
cin>>cal;

if(cal<7) //condicion
    {
    cout<<"Tu calificacion es: "<<cal<<", "<<"reprobaste"; //si es real el if se hace esto
    }
else
    {
    cout<<"Tu calificacion es: "<<cal<<", "<<"aprobaste"; //si no es verdad toma este camino
    }

return 0;
}
