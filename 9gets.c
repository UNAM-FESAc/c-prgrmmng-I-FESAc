#include <stdio.h>
/*
La funcion gets toma una entrada de caracteres de la 
entrada. Esta funcion permite introducir incluso espacios.
Pero esta funcion es peligrosa por varias razones...
¿por qué crees? 
*/

main()
{
  char cadena[50];

  puts("Escriba un texto:");
  gets(cadena);
  puts("El texto escrito es:");
  puts(cadena);
}
