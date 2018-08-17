#include <stdio.h>
/*

El estudiante debe hacer que los valores INICIAL, FINAL y NUMERO 
se adquieran a traves de la pantalla y que la salida sea la 
tabla de multiplicar de NUMERO.

*/



int main()
{

	int inicial, final, i, numero,tabla_multi;

	printf("Valor inicial: ");
	scanf("%d",&inicial);
	printf("Ingrese el valor final: ");
	scanf("%d",&final);
	printf("Ingrese el NUMERO: ");
	scanf("%d",&numero);

		for(i=inicial; i<=final; ++i)
	{
    tabla_multi=i*numero;
	printf("%d x %d = %d \n", numero, i, tabla_multi);
	}
}
