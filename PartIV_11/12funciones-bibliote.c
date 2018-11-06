/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <stdio.h>

void main()
{
  char cadena[10];

  puts("Escriba un texto:");
  fgets(cadena, sizeof cadena, stdin);
  puts("El texto escrito es:");
  puts(cadena);
}

