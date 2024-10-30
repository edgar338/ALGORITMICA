//PROGRAMA: CAJERO AUTOMATICO
#include <iostream>

using namespace std;

int main()
{
int sal=1000,pina=1234,pinb,opc,ret;
long tra;
string usu,son;

cout<<"USUARIO: ";
cin>>usu;

do{
    cout<<"USUARIO: "<<usu<<"\nINGRESA EL PIN:";
    cin>>pinb;

    if(pina!=pinb){
        cout<<"PIN INCORRECTO, INTENTE OTRA VEZ"<<endl;
        }

    }while(pina!=pinb);

do{
    cout<<"----------CAJERO AUTOMATICO----------"<<endl;
    cout<<"HOLA "<<usu<<" �QUE QUIERES HACER?"<<endl;
    cout<<"1)RETIRAR DINERO"<<endl;
    cout<<"2)CONSULTAR SALDO"<<endl;
    cout<<"3)CAMBIAR PIN"<<endl;
    cout<<"4)TRANSFERIR FONDOS"<<endl;
    cout<<"5)SALIR"<<endl;
    cin>>opc;
    switch(opc){
        case 1:
            cout<<"INSERTE LA CANTIDAD QUE DESEA RETIRAR: $";
            cin>>ret;
            cout<<"�ESTA SEGURO QUE DESEA RETIRAR ESTA CANTIDAD?: ";
            cin>>son;

            if(son=="si"){
                cout<<"RETIRO REALIZADO";
                }
            else{
                cout<<"RETIRO CANCELADA";
                }
        break;
        case 2:
            cout<<"TU SALDO ES:$"<<sal;
        break;
        case 3:
            do{
                cout<<"INSERTE SU PIN ACTUAL: ";
                cin>>pinb;

                if(pina!=pinb){
                    cout<<"PIN INCORRECTO, INTENTE NUEVAMENTE"<<endl;
                    }
                }while(pina!=pinb);

            do{
                cout<<"INSERTE EL NUEVO PIN: ";
                cin>>pina;
                cout<<"CONFIRME EL PIN: ";
                cin>>pinb;

                if(pina!=pinb){
                    cout<<"PIN INCORRECTO, ASEGURESE DE PONER EL MISMO PIN"<<endl;
                    }

                }while(pina!=pinb);

                cout<<"SU PIN HA SIDO CAMBIADO CON EXITO"<<endl;
        break;
        case 4:
            cout<<"INSERTE LA CUENTA A LA QUE QUIERA TRANSFERIR"<<endl;
            cin>>tra;
            cout<<"�QUE CANTIDAD DESEA TRANSFERIR? $";
            cin>>ret;
            cout<<"�ESTA SEGURO QUE DESEA TRANSFERIR ESTA CANTIDAD?: ";
            cin>>son;

            if(son=="si"){
                cout<<"TRANFERENCIA REALIZADA";
                        }
            else{
                cout<<"TRANFERENCIA CANCELADA";
                }
        break;
        case 5:
            cout<<"SALIENDO...";
        break;
        default:
            cout<<"ESTA OPCION NO ESTA DISPONIBLE, INTENTE NUEVAMENTE"<<endl;break;
        }

    }while(opc<1||opc>5);

return 0;
}
