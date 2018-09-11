/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <stdio.h>
//#include <string.h>
/*
La funcion fgets toma una entrada de caracteres de la 
entrada. 
En este ejemplo, cadena es el nombre del arreglo de caracteres, 
sizeof cadena es la cantidad de texto en la entrada más uno; 
y stdin es el nombre del dispositivo estandar de entrada.
*/

void main()
{
  char cadena[5];

  puts("Escriba un texto:");
  fgets(cadena, sizeof cadena, stdin);
  puts("El texto escrito es:");
  puts(cadena);
}

