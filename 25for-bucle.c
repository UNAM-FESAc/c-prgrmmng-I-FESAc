#include <stdio.h>

/*
Bucle for
la estructura general es como sigue:

for(declaracion_inicializacion; expresion_prueba; expresion_siguiente)
{sentencias....;...;}

La decalracion de inicializacion se ejecuta una vez. Se 
evalua la expresion de prueba y si la expresion de prueba es falsa; se termina el bucle, de otra forma 
las sentencias se ejecutan hasta la expresion siguiente se cumple.
El proceso se repite hasta que la expresion de prueba 
es falsa.
*/

int main(){
int i;

for(i=0; i<=5;++i)
{
printf("los digitos son: %i\n", i);
}
return 0;
}