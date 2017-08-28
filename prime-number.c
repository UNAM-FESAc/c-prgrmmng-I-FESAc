/*
Este programa introduce el concepto de los condicionales.
TAREA EN CLASE: 
Realizar un progama que pida un numero y responda si es par o impar.
*/

#include <stdio.h>

void main()
{
        int i;
            
        printf("Introduzca numero del 1 al 4:");
    	
	scanf("%d",&i);

    if (i!=4) {
       printf("Es primo.\n");
    }
    else
    {
       printf("No es primo.\n");
    }
}
