#include <stdio.h>
/*
La funcion puts coloca una cadena de caracteres en 
la terminal y da un salto de linea. 
Note que scanf en este formato reconoce cadenas de 
palabras y la terminacion es un espacio 
o un fin de linea.
 */

void main()
{
  char nombre[1];
  printf("dame tu nombre ");
  scanf("%5s", nombre);
  printf("Bienvenido %5s a la clase...", nombre);
  puts("de programación en ");
  puts("lenguaje C");

}
