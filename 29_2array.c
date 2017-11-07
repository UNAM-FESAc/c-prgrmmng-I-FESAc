/*
Implementaremos algunos conceptos. 
Identifiquemos:

1) static

2) Apuntador

3) Arreglo

4) register

5) Bucle

6) Operadores

7) Direcciones de memoria

8) Formatos

*/

#include <stdio.h>
 
static int num = 4;
 
int main () {

   char *names[] = {"Simpson, B.","Simpson, H","Simpson, M.","Simpson, E."};
   
   register int i, j;


for ( i = 0; i < num; i++) {
      printf("Los integrantes de la familia son [%d] = %s\n", i, names[i] );
   }
   
   for ( j = 0; j < num; j++) {
      printf("La direccion de la memoria para cada uno de los nombres de los miembros es [%d] = %x\n", j, *names[j] );
   }

   return 0;
}
