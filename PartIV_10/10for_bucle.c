/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

/*
declaracion for
*/

#include <stdio.h>



int main()
{

	int inicial, final, i, numero, prod_nume;
	puts("\v\t\t\tEste programa te imprime una tabla de multiplicar\n");
	puts("\t\t\tde un NUMERO desde un numero inicial\n");
	puts("\t\t\thasta un numero final");
	printf("Valor inicial: ");
	scanf("%d",&inicial);
	printf("Ingrese el valor final: ");
	scanf("%d",&final);
	printf("Ingrese el NUMERO: ");
	scanf("%d",&numero);

		for(i=inicial; i<=final; ++i)
	{
prod_nume=i*numero;
	printf("%d x %d = %d \n", numero, i, prod_nume);

	}
}
