/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <stdio.h>
#define k 2

static int max = 3;
 

int main(){

   char   * var[]= {"hola", "mundo", "bonito"};


   register int i;
 
   for (i = 0; i < max; i++) {
   printf("La posicion de este elemento es [%i],  los elementos son: %s\n", i, var[i]);
   printf("La dirección de memoria del elemento %i es %x.\n", i,* (var[i]));
   printf("La dirección de memoria del elemento %i, que es %c, de la cadena %i es %x\n\n", k, var[i][k], i,var[i][k]);
   };


   return 0;
}
