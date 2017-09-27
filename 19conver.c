#include <stdio.h>

/*
Algunos notas sobre los tipos de constantes
*/


int main(){

int Idgt=11;
double fdgt=4.0;


fdgt= fdgt + Idgt;
printf("El valor de Idgt se convierte en float (%f) antes de la suma\n", fdgt);


fdgt= Idgt/5.;
printf("El valor de Idgt se divide y queda float (%f) despues se convierte a double y se asigna a Idgt\n", fdgt);


fdgt= fdgt/5.;
printf("Convierte el valor 5 a tipo double, hace una division real (%.2f) y  despues lo asigna a Idgt\n", fdgt);



return 0;
}
