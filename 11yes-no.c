#include <stdio.h>
/*
En este archivo encuentras el uso del operador || (significa "o").
Debes crear el pseudocódigo y extender erchivo para que las respuestas 
posibles sea s, n, y.
Fuente: http://programavideojuegos.blogspot.mx/
*/

int main()
{
  char c;
           
  printf("Introduzca un carácter:");
  scanf("%c",&c);
   
  if (c=='s' || c=='n' ){
    printf("Es correcto\n");
  }
  else
    {
      printf("Es incorrecto\n");
    }
     return 0;
}
