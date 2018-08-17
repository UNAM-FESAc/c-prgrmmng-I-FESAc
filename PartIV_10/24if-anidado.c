#include <stdio.h>

/*
En este programa trabajaremos con las condicionales 
anidadadas.

if(condicion1) 
{
   las sentencias que se ejecutaran si la condicion1
   es cierta
}
else if(condicion2) 
{
   las sentencias que se ejecutaran si la condicion1
   es falsa y la expresion2 es verdadera
}
else if(condicion3) 
{
   las sentencias que se ejecutaran si la condicion1
   y la expresion2 son falsas, y la condicion3 es 
   verdadera
}
...
else 
{
   si todas las declaraciones anteriores son falsas
}
*/

int main(){

int a, b;

printf("Introduzca dos numeros separados por un espacio:");
scanf("%i %i",&a, &b);
 
if(a%2==0 && b%2==0)
	{printf("%i y %i son pares\n", a, b);}
else if(a%2!=0 && b%2!=0)
	{printf("%i y %i son impares\n", a, b);}
else if(a%2==0 || b%2!=0)
	{printf("%i es par y %i es impar\n", a, b);}
else if(a%2!=0 || b%2==0)
	{printf("%i es impar y %i es par\n", a, b);}
return 0;
}
/*
La tarea del estudiante es hacer que el programa 
informe si el caracter introducido no es una numero.
*/
