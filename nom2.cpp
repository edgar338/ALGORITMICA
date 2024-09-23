/*Programa: NOMBRE 2*/
#include <cstdio> /*mezcla enttre conio.h y stdio.h*/
#include <conio.h>

int main()
{
    char nombre [20], apellido [20]; /*Agregamos otra variable que es el apellido*/ /*Los corchetes son para indicar el maximo de caracteres*/
    printf("Introduce tu nombre:");
    scanf("%s", nombre);
    printf("Introduce tu apellido:"); /*hacemos lo mismo pero con el apellido*/
    scanf("%s", apellido);
    printf( "Hola %s %s, bienvenido.", nombre, apellido,161); /*despues de las comillas pones el orden en que quieras que aparezcan los char*/

    getch ();

    return 0;
}
