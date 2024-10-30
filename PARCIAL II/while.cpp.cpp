//PROGRAMA: WHILE

#include<iostream>

using namespace std;

int main ()
{
double num,sum,mul=1; //a mul le tenemos q dar valor de 1 pq va a ser una multiplicacion, y si no se buguea

while(num!=0) //mientras que num no sea 0 se va a repetir este ciclo
    {
    cout<<"Di un numero mayor a 0: ";
    cin>>num;

    sum=sum+num;
    mul=mul*num;

    cout<<"La suma total es: "<<sum<<", y la multiplicacion total es: "<<mul<<endl;
    }

return 0;
}
