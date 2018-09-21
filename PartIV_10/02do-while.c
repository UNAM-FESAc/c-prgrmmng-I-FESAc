/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

// do-while

#include <stdio.h>


int main(){

int digito, DigFinal;

printf("Dame un valor entero inicial ");

scanf("%i",&digito);
digito = digito -1;


printf("Dame un valor entero final ");

scanf("%i",&DigFinal);
DigFinal= DigFinal -1;

printf("Ahora te muestro una lista de datos:\n");


do
{
digito=digito+1;
printf("%d\n", digito);
}
while(digito <= DigFinal);
return 0;
}
