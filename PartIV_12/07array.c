/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos


#include <stdio.h>
#include <string.h>

int main () {
   char fuente1[25], fuente2[25], destino[75];

   strcpy(fuente1,  " Esta es la primera fuente. ");
   strcpy(fuente2, " Este es la segunda fuente. ");
   strcpy(destino, " Este es el destino. ");


   strcat(destino, fuente1);
   strcat(destino, fuente2);

   printf("Cadena de destino final: %s \n", destino);
   return 0;
}

