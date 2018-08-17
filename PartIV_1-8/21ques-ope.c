#include <stdio.h>

/*
El operador ? se usa de la forma C ? A : B
y e suna operacion con tres operandos. Se conoce como expresion 
condicional. Note la similitud con el condicional if-else.

Es importante que el estudiante cambie == por =, y reflexione.
Uno es un operador de igualdad y el otro es el operador de asignacion.
*/


int main(){

int a, b;

printf("\vescriba dos numeros separados por un espacio.\n\v");
scanf("%i %i", &a, &b);

a==b ? printf("a y b son iguales\n\v") : printf("\va y b son diferentes\n\v");

return 0;
}
