/*
En este archivo implementamos la funcion de biblioteca 

strcpy()

que nos permite copiar cadenas. Esta funcion anade un caracter nulo 
al final de la cadena.

Tambien usaremos la funcion strcat(destino, fuente)

donde 

destino= es el arreglo de destino, el cual contendra la 
	cadena de C y debera ser lo suficientemente grande
	para contener la cadena concatenada resultante.

fuente= es la cadena que sera agregada 


*/


#include <stdio.h>
#include <string.h>

int main () {
   char fuente1[17], fuente2[17], destino[60];

   strcpy(fuente1,  " Esta es la primera fuente");
   strcpy(fuente2, " Este es la segunda fuente ");
   strcpy(destino, "Este es el destino ");



   strcat(destino, fuente1);
   strcat(destino, fuente2);
   printf("Cadena de destino final: ++%s++ \n", destino);
   return 0;
}


/*

Note que requerimos otra biblioteca.
Note la forma en la que implementamos mas concatenacion.

El concepto de concatenacion surge porque en C no existe el operador de suma de 
cadenas como en otros lenguajes.
*/
