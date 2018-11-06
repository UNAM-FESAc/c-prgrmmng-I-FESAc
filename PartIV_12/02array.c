/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos


#include <stdio.h>

int main(){

float a[2];

puts("\t\tDame las coordenadas de un vector");
printf("x = ");
scanf("%f", &a[0]);

printf("y = ");
scanf("%f", &a[1]);

printf("Tenemos que v = (%3.1f, %3.1f)\n", a[0], a[1]);


return 0;
}
