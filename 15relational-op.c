#include <stdio.h>

// Como funcionan los operadores de relacionales

/* 
 Observe el siguiente codigo y realice los cambios pertinentes
 para que la salida muestre los operadores relacionales y los resultados
 correctamente.
*/
int main()
{
    int a, b, c; //= 5, b = 5, c = 10;

printf("dame el valor de a=");
scanf("%d", &a);

printf("dame el valor de b=");
scanf("%d", &b);

printf("dame el valor de c=");
scanf("%d", &c);

    printf("hemos obtenido %d == %d = %d \n", a, b, a == b); // true
    printf("%d == %d = %d \n", a, c, a == c); // false

    printf("%d > %d = %d \n", a, b, a > b); //false
    printf("%d > %d = %d \n", a, c, a > c); //false


    printf("%d < %d = %d \n", a, b, a < b); //false
    printf("%d < %d = %d \n", a, c, a < c); //true


    printf("%d != %d = %d \n", a, b, a != b); //false
    printf("%d != %d = %d \n", a, c, a != c); //true


    printf("%d >= %d = %d \n", a, b, a >= b); //true
    printf("%d >= %d = %d \n", a, c, a >= c); //false


    printf("%d <= %d = %d \n", a, b, a <= b); //true
    printf("%d <= %d = %d \n", a, c, a <= c); //true

    return 0;

}
