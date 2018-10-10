/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos.


/*
Se requiere un valor centinela como ultimo dato a 
para manejar los elementos a evaluar y que el bucle 
no entre en un ciclo infinito.
*/


#include <stdio.h>



int main(){

const int centinela = -1;
int nota, cuenta, suma=0;

printf("\vPara salir escriba: -1\n\v");
printf("\vintroduzca primera calificacion ");
scanf("%d", &nota);

while (nota != centinela)
{
 	cuenta++;
	suma += nota;
	printf("Introduzca la siguiente calificacion ");
	scanf("%d", &nota);

if(nota == centinela){
printf("Introdujo %i datos. La suma total es = %i.\n", cuenta, suma);
	}
}

puts("final");


return 0;
}
