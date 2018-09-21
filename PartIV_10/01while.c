/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos



#include <stdio.h>

int main(){

int DigIni, DigFinal;

printf("Dame un valor entero inicial ");

scanf("%i",&DigIni);
DigIni = DigIni -1;


printf("Dame un valor entero final ");

scanf("%i",&DigFinal);
DigFinal= DigFinal -1;

printf("Ahora te muestro una lista de datos:\n");

while(DigIni <= DigFinal)
{
DigIni= DigIni+1;
printf("%d\n",DigIni);
}
return 0;
}
