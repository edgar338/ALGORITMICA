/*Programa: nombre*/
#include <conio.h> /*nueva biblioteca que te deja hacer mas cosas*/
#include <stdio.h>


int main()
{
    char nombre [20]; /*el char se usa para poder escribir alguna cadena de texto*/

    printf("Intruduce tu nombre:");
    scanf("%s", nombre); /*pones el nombre y lo procesa*/ /*el %s es la forma de programar el char*/
    printf("Hola %s, buenos dias.", nombre, 161);

    getch(); /*pone en pausa el proceso*/

    return 0; /*Hace que todo el programa se resetee para usarlo otra vez*/
}
