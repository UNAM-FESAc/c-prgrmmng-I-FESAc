/*
Programa para implementar un arreglo solicitando datos por terminal.
*/


#include <stdio.h>

int main(){

int i;

float a[2];

printf("primer ");
scanf("%f", &a[0]);

printf("segunda ");
scanf("%f", &a[1]);


for(i=0; i<=1; i++){
printf("Tenemos que la %i componente es %.1f\n", i, a[i]);
}

return 0;
}

