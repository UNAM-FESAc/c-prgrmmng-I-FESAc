/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos


// Como funcionan los operadores de asignacion
// Aprenderemos como colocar datos en notacion 
// cientifica en la salida.


#include <stdio.h>
int main()
{
    float a = -2.5;
    float c;
    int d;

    c = a;
    printf("c = %.2f \n", c);

// c = c+a. En esta linea se realiza la suma
    c += a; 
    printf("c = %.2f \n", c);

// c = c-a. En esta linea se realiza la resta.
    c -= a; 
    printf("c = %.2f \n", c);

// c = c*a. En esta linea se realiza el producto
    c *= a; 
    printf("c = %.2f \n", c);

// c = c/a. En esta linea se realiza la division
    c /= a; 
    printf("c = %2.1e \n", c);

    return 0;
}
