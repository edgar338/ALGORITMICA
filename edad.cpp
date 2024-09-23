//Programa: EDAD
#include <conio.h>
#include <stdio.h>

int main()
{
    int dia, mes, ano, edad; //Declaramos las variables que usaremos
    printf ("dame tu dia de nacimiento: ");
    scanf ("%d",&dia);

    printf ("dame tu mes de nacimiento: ");
    scanf ("%d",&mes);

    printf("dame tu ano de nacimient: ");
    scanf ("%d",&ano);


    edad=2024-ano; //calcula para la edad
    printf("tu edad es %d",edad);

getch();

}
