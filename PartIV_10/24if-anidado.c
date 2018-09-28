/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

// if anidado

#include <stdio.h>


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

