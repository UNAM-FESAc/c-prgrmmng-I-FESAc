/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <stdio.h>
#define fesp(x) (x*x +2*x - 1)

int main(){

float x;

for (x =0.0; x<= 6.5; x +=0.5)
{
printf("f(%.1f) = %6.2f\n", x, fesp(x));
}

return 0;
}

