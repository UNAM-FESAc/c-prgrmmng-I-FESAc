#include <stdio.h>
//#include <stdlib.h>

int main(void)
{
  char cadena;
           
  printf("Introduzca un carácter:");
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
