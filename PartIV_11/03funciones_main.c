/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos


#include<stdio.h>

#include"04funciones_sec.c"


float x, y, as;


int main(){

printf("Dame dos numeros ");
scanf("%f %f",&x, &y);

as = suma(x, y);

printf("El resultado de la suma = %.2f\n", as);

return 0;
}
