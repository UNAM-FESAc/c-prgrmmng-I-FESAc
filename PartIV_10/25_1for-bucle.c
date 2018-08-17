#include <stdio.h>
/*

En este archivo implementaremos el ciclo for,considerando la siguiente 
estructura:

for(inicializacion; condicion; operacion)
{
//Acciones, instrucciones, declaraciones o sentencias.
}

Este tipo de sentencia (for) se implementa cuando conocemos el numero de 
veces que deseamos repetir la accion (iteraciones) y es una de las mas usadas en diferentes 
lenguajes de programacion.



El estudiante debe hacer que los valores inicial y final se adquieran a traves 
de la pantalla.

*/



int main()
{

	int inicial = 1, final=10, i;

		for(i=inicial; i<=final; i++)
	{
		printf("%d\n",i);
	}
}
