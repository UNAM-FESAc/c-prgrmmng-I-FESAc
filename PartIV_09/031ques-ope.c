/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <stdio.h>



int main(){

int a, b;

printf("\vescriba dos numeros separados por un espacio.\n\v");
scanf("%i %i", &a, &b);

a==b ? printf("a y b son iguales\n\v") : printf("\va y b son diferentes\n\v");

return 0;
}


/*

Operador ternario:

El operador ? se usa de la forma C ? A : B
y es una operacion con tres operandos. Se conoce como expresion 
condicional. Note la similitud con el condicional if-else.

Es importante que el estudiante cambie == por =, y reflexione.
Uno es un operador de igualdad y el otro es el operador de asignacion.
*/
