/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <stdio.h>

int main(void)
{
  char cadena;
           
  printf("Introduzca un carácter (y, s, n):");
  scanf("%s",&cadena);
  if (cadena=='y'|| cadena=='n'||cadena=='s'){
    printf("Es correcto\n");
  }
  else
    {
      printf("Es incorrecto\n");
    }
   
  return 0;
}
