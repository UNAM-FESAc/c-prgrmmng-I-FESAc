/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <stdio.h>


void intercambio(int *a, int *b){

int aux = *a;

*a=*b;
*b=aux;

}




int main(){

int i=3, j=50;

printf("i=%d y j=%d\n", i,j);

intercambio(&i, &j);

printf("i=%d y j=%d\n", i,j);

return 0;
}







