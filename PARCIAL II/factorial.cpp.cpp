//PROGRAMA: FACTORIAL
#include <iostream>

using namespace std;

int main()
{
int opc,num,i,fac=1;
char son;
do{
    do{
        cout<<"QUE QUIERES HACER"<<endl;
        cout<<"1)FACTORIZAR"<<endl;
        cout<<"2)TABLA DE MULTIPLICAR"<<endl;
        cout<<"3)SALIR"<<endl;
        cin>>opc;
        switch(opc){
            case 1:
                do{
                     do{
                    cout<<"DAME UN NUMERO QUE SEA ENTERO Y POSITIVO: ";
                    cin>>num;
                    if(num<1){
                        cout<<"ESTE NUMERO NO ES POSIBLE HACERLE UN FACTORIAL"<<endl;
                        }
                    }while(num<1);
                for(i=1;i<=num;i++){
                    fac=fac*i;
                    }
                cout<<"EL FACTORIAL DE "<<num<<" ES "<<fac<<endl;
                cout<<"DESEAS VOLVER A USAR ESTA OPCION? (s): ",
                cin>>son;
                fac=1;
                }while(son=='s');
                cout<<"SALIENDO..."<<endl;
            break;
            case 2:
                do{
                    cout<<"DI UN NUMERO: ";
                    cin>>num;
                    for(i=1;i<=10;i++){
                        cout<<num<<" x "<<i<<" = "<<num*i<<endl;
                        }
                    cout<<"DESEAS VOLVER A USAR ESTA OPCION? (s): ",
                    cin>>son;
                    }while(son=='s');
                cout<<"SALIENDo..."<<endl;
            break;
            case 3:
                cout<<"CERRANDO PROGRAMA..."<<endl;
            break;
            default:
                cout<<"ESTA OPCION NO ESTA DISPONIBLE"<<endl;
            break;
            }
        }while(opc<1||opc>3);
     cout<<"DESEAS VOLVER AL MENU? (s), EN CASO DE QUE NO ESTE PROGRAMA SE CERRARA: "<<endl;
     cin>>son;
    }while(son=='s');
cout<<"CERRANDO PROGRAMA...";
return 0;
}
