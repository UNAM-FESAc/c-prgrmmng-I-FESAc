/*
Este programa recibe un caracter no numerico 
indefinidamente. El bucle termina al introducir un 
caracter numerico
*/



#include <stdio.h>
#include <ctype.h>

int main(){
char a;

printf("Imprima una caracter ");
scanf("%c",&a);

while(!isalpha(a)){
puts("Caracter no alfabetico");
printf("\nOtro valor \n");
scanf("%c",&a);
}
puts("Fin");
return 0;
}




