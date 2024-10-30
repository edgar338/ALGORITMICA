//PROGRAMA: CALCULADORA
#include <iostream>

using namespace std;

int main()
{
float numa,numb,sor,sum,mul;

cout<<"Dame un numero: ";
cin>>numa;
cout<<"Dame otro numero: ";
cin>>numb;

cout<<"si quieres sumar o restar teclea 1: "; //para dividir las opciones de 2 en 2
cin>>sor;

if(sor==1) //si teclea lo q indica se hace el if, si no pasa al else
    {
    cout<<"si quieres sumar teclea 1: ";
    cin>>sum;
    if(sum==1) //un if dentro de otro if
        {
        cout<<numa+numb; //aqui si los puedes sumar directo
        }
    else //el else dentro del if
        {
        cout<<numa-numb;
        }
    }
else  //primer else
    {
    cout<<"Si quieres multiplicar teclea 1: ";
    cin>>mul;
    if(mul==1) //if dentro de else
        {
        cout<<numa*numb;
        }
    else //else dentro de else
        {
        cout<<numa/numb;
        }
    }

    return 0;

}
