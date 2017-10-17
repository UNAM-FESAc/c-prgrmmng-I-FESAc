/*
El uso de funciones aumenta la velocidad del programa.
En este programa usaremos las llamadas funciones en linea. 
Aunque su nombre no adecuado ya que el preprocesador expande o 
sustiye la expresion cada vez que es llamada. 
El compilador inserta  el codigo en el 
punto en que esta funcion en linea o macros con argumentos se llama.

*/
/*
En estas lineas definimos la funcion creada por el usuario. La forma general es:

#define NOMBRE_MACRO(parametros_NO_tipo) expresion-texto


*/




/*
En las siguientes lineas creamos la funcion principal
*/

#include <stdio.h>
#define fesp(x) (x*x +2*x - 1)

void main(){

float x;

for (x =0.0; x<= 6.5; x +=0.5)
{
printf("f(%.1f) = %6.2f\n", x, fesp(x));
}
}



/*
El problema con este tipo de macros es que se consume 
mucha memoria ya que la toda invocacion del macro 
representa una copia de la expresion completa que 
representa.
*/
