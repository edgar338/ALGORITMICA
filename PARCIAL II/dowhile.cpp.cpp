//PROGRAMA: DO WHILE

#include<iostream>
using namespace std;
int main ()
{
int con,x;

x=809;

do //Se hace una vez y luego piensa
    {
    cout<<" USUARIO:Admin \n CONTRASENIA:";
    cin>>con;
    if(con!=x)
    {
    cout<<"CONTRASENIA INCORRECRA"<<endl;
    }
    }while(con!=x); //condicion para q se repita

cout<<"CONTRASENIA CORRECTA";

return 0;
}
