/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos


#include <stdio.h>

/*
Algunos notas sobre los tipos de constantes
*/


int main(){

int a=11;
float b=4.0;


b = b + a;
printf("El valor de a se convierte en float (%f) antes de la suma\n", b);


b= a/5.;
printf("El valor de a se divide y queda float (%f) despues se convierte a float y se asigna a b\n", b);


b= b/5;
printf("Toma el valor anterior de b, Convierte el valor 5 a tipo float, hace una division (%f) y despues lo asigna a b\n", b);

return 0;
}
