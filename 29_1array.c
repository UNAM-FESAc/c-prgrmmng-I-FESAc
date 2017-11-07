/*
Ahora veamos una forma de implementar vectores con float.
Compare con el anterior archivo (29_1array.c).
*/


#include <stdio.h>

int main(){

float a[2];

printf("primer ");
scanf("%f", &a[0]);

printf("segundo");
scanf("%f", &a[1]);

printf("Tenemos que a[%3.1f %3.1f]\n", a[0], a[1]);


return 0;
}
