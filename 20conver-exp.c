#include <stdio.h>

/*
Este programa muestra la forma de realizar conversiones explicitas de 
tipo de constantes.
*/


int main(){

int Idgt=11;
double fdgt=4.6;



printf("\vUsando el formato (tiponombre)valor, podemos cambiar el formato.\n");
printf("Por ejemplo Idgt=11 cambia float: %f\n\v", (float)Idgt);


printf("Por ejemplo fdgt=4.6 cambia double: %i\n\v", (int)fdgt);




return 0;
}
