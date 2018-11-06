/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos


#include <stdio.h>

void main ()
{
char nombre[40];

int a;


printf("Como te gusta que te llamen (sin espacios)? ");
scanf("%[^\n]", nombre);

printf ("\nDiga la posicion del caracter que quiere imprimir \n");
scanf("%i", &a);

printf ("\nEl caracter que está en esa posición es: %c\n", nombre[a-1]);

printf ("\n\tMucho gusto %s Diviértete mientras aprendes C.\n", nombre);
printf("\tLograrás mucho.\n");

}
