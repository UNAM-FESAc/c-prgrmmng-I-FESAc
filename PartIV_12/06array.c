/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos


#include <stdio.h>
 
 
int main () {

static int num = 4;

char names[4][12] = {"Simpson, B.","Simpson, H.","Simpson, M.","Simpson, E."};   
   
register int i, j;


for ( i = 0; i < num; i++) {
printf("\tLos integrantes de la familia son [%d] = %s\n", i, names[i]);
printf("\t\tLa direccion de la memoria de la posicion [%d]  es %x\v\n", i, *(names[i]));

for ( j = 0; j < 12; j++) {
printf("El caracter [%i, %i] es %c \ty su direccion de memoria es %x\v\n ",i, j, names[i][j], names[i][j]);
}
   getchar();
}


   return 0;
}
