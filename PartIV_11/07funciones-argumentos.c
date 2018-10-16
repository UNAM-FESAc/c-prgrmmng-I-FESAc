/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos


#include <stdio.h>
#define PI 3.1415
#define VOLCONO(radio, altura) ((PI*(radio*radio)\
				*altura)/3.0)

int main(){
float radio, altura, volumen;

printf("\nIntroduzca el radio del cono [cm]: ");
scanf("%f", &radio);

printf("\nIntroduzca la altura del cono [cm]: ");
scanf("%f", &altura);

volumen=VOLCONO(radio, altura);

printf("\nEl volumen del cono es: %.2f cm3\n\v", volumen);

return 0;
}

