#include <stdio.h>

/*
La instruccion while se utiliza para generar bucles (ciclos):
un grupo de instrucciones se ejecuta de forma repetida, hasta 
satisfacer la condicion
la forma general es:

while(condicion){instrucciones}

*/


int main(){

int digito, DigFinal;

printf("Dame un valor entero inicial ");

scanf("%i",&digito);
digito = digito -1;


printf("Dame un valor entero final ");

scanf("%i",&DigFinal);
DigFinal= DigFinal -1;

printf("Ahora te muestro una lista de datos:\n");

while(digito <= DigFinal)
{
digito= digito+1;
printf("%d\n",digito);
}
return 0;
}
