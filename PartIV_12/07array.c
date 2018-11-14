/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos
#include <stdio.h>
#include <string.h>
int main () {
   char fuente1[30], fuente2[30], destino[85];
   strcpy(fuente1,  " Esta es la primera fuente. \n");
   strcpy(fuente2, " Este es la segunda fuente. \n");
   strcpy(destino, " Este es el destino. \n");
   strcat(destino, fuente1);
   strcat(destino, fuente2);
   printf("Cadena de destino final:\n %s \n", destino);
   return 0;
}

