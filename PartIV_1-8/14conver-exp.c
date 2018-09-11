/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos


#include <stdio.h>

/*
Este programa muestra la forma de realizar conversiones explicitas de 
tipo de constantes.
*/


int main(){

int a = 11;
double b = 4.6;



printf("\v Usando el formato (tiponombre)valor, podemos cambiar el tipo de dato (CAST).\n");

printf("Por ejemplo a = %i, para cambiar a float, usamos el formato (float)a = %f \n\v", a, (float)a);


printf("Por ejemplo b = %f, para cambiar a cambiar a entero, usamos (int)b =  %i \n\v", b, (int)b);


return 0;
}
