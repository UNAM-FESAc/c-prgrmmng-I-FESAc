/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos.

/*
Este programa usa un caracter (o caracteres) para evitar los bucles infinitos. 
Usando un while, su condicion e instrucciones 
que se realizan ciclicamente, hasta que un caracter los detiene.
*/


#include <stdio.h>

int main(){

int digito_leido=0;
char car;

while(!digito_leido){
	printf("Introduzca un caracter:");
	scanf("%8s", &car);
	digito_leido = ('0'<=car && car<='9');
}

return 0;
}
