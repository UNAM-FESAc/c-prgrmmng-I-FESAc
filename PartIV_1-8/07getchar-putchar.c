/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <stdio.h>

/*
En este ejercicio se introducen las funciones principales de entrada y salida 
de caracteres.
 */


/*  Ejercicios en clase 
- Cambia int por void y observa lo que sucede.
- Omite definir el tipo de la funcion y observa que sucede
*** Cuando puedas usar la terminal usa: 
 gcc -Wall nombredelarchivo.c -o nombredelarchivo
 y analia lo que sucede
*/

int main()
{
  //La funcion getchar no devuelve nada hasta presionar enter
  getchar();
  // la funcion putchar escribe un unico caracter en la salida estandar
	putchar('h');
	putchar('o');
	putchar('l');
	putchar('a');
	putchar(32); // codigo ASCII para el espacio 
	putchar('c');
	putchar('l');
	putchar('a');
	putchar('s');
	putchar('e');

	putchar('\n');
  getchar();
  return 0;
}
