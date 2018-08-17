#include <stdio.h>

void main ()
{
char nombre[10];

int a;


printf("Como te gusta que te llamen (sin espacios)? ");
scanf("%11s", nombre);


getchar();

printf ("\nCual caracter quieres imprimir \n");
scanf("%i", &a);

printf ("\nimprime un caracter %c\n", nombre[a]);

printf ("\nMucho gusto %11s.", nombre);
printf ("\nDiviertete mientras aprendes C.\n");
printf("Lograras mucho.\n");

}


/*
Puedes reemplazar 
getchar();

por 
while ( getchar() != '\n');

o

system("pause");

en Linux o Windows.


******************************

Ejercicio en clase:
El estudiante debe hacer su programa explore toda la cadena dada y 
que le busque algun caracter o que le diga que no esta en la cadena.

******************************

*/
