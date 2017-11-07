#include <stdio.h>
 
static int max = 3;
 

int main () {

   char  *var[] = {"hola", "mundo", "bonito"};


   register int i;
 
   for (i = 0; i < max; i++) {

      printf("valor de cada elemento es [%i],  los elementos son: %s\n", i, var[i] );

   }

   return 0;
}
