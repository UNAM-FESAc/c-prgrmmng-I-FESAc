/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <stdio.h>
#include <stdlib.h>

int main() {
int BloquesDeptos[4][3];

BloquesDeptos[0][0] = 2;
BloquesDeptos[0][1] = 3;
BloquesDeptos[0][2] = 1;

BloquesDeptos[1][0] = 4;
BloquesDeptos[1][1] = 5;
BloquesDeptos[1][2] = 10;

BloquesDeptos[2][0] = 12;
BloquesDeptos[2][1] = 13;
BloquesDeptos[2][2] = 14;

BloquesDeptos[3][0] = 7;
BloquesDeptos[3][1] = 6;
BloquesDeptos[3][2] = 8;

printf("El numero de personas que viven en el departamento 3 del bloque 2 es %i\n", BloquesDeptos[1][2]);

return 0;
}
