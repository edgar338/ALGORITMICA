//PROGRAMA: PROMEDIO

#include <iostream>

using namespace std;

int main()
{
float cala,calb,calc,calf;

cout<<"Primera calificacion: ";
cin>>cala;
cout<<"Segunda calificacion: ";
cin>>calb;
cout<<"Tercera calificacion: ";
cin>>calc;

calf=(cala+calb+calc)/3; //saca el promedio

if(calf<7)
    {
    cout<<"Reprobaste, tu calificacion final es: "<<calf;
    }
else
    {
    cout<<"Aprobaste, tu calificacion final es: "<<calf;
    }

return 0;
}
