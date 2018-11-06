/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <stdio.h>
#define n 100

void main ()
{
char nombre[n];
char apellido[n];

printf("Como te gusta que te llamen? ");
scanf("%[^\n]%*c", nombre);
printf("Cual es tu apellido (sin espacios)? ");
scanf("%[^\n]", apellido);

printf("\v\tHola %s tu apellido es %s\n", nombre, apellido);
}

