/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

/* Ejemplo para introducir el concepto de void, 
los tipos de datos char e int, otros formatos como 
string.



Es posible que requiere otros estándar:
gcc -Wall -std=c99 NOMBRE.c -o NOMBRE
gcc -std=gnu99 NOMBRE.c -o NOMBRE
*/

#include<stdio.h>

int main(){

char n;


// definicion de una cadena de longitud 18
char nombre[18];
// definicion de un entero
int edad;
/* la funcion printf sirve para mostrar datos en la 
pantalla
FUNCION DE SALIDA
*/
printf("Escriba su nombre: ");
/*La funcion scanf sirve para introducir datos en la pantalla
FUNCION DE ENTRADA
*/
scanf("%s", &nombre);
printf("\n Escriba la edad de %s: ", nombre);
scanf("%d", &edad);
printf("\n");
printf("Su nombre es: %s \n", nombre);
printf("Su edad es: %d  años \n", edad);
return 0;
}

