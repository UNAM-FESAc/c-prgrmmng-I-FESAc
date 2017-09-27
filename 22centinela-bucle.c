#include <stdio.h>

/*
Se requiere un valor centinela como ultimo dato a 
para manejar los elementos a evaluar y que el bucle 
no entre en un ciclo infinito.
*/


int main(){

const int centinela = -1;
int nota, cuenta, suma;

printf("\vPara salir escriba: -1\n\v");
printf("\vintroduzca primera nota ");
scanf("%d", &nota);

while (nota != centinela)
{
 	cuenta++;
	suma += nota;
	printf("Introduzca la siguiente nota ");
	scanf("%d", &nota);
}

puts("final");
return 0;
}
