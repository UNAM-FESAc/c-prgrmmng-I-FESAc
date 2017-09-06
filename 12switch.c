#include <stdio.h>
#include <math.h>
/*
La declaración switch como una declaración de selección 
múltiple. Esta declaración se usa para seleccionar un 
camino de diferentes alternativas en la ejecución de 
un programa. Funciona asociando una variable con un lista 
de enteros y cuando encuentra la opción que se ajusta; 
entonces la secuencia se ejecuta.

En este programa veremos la forma general de la 
declaración switch.
Tu trabajo es introducir el teorema del seno y 
del coseno en el programa; introducir dos lados 
y un ángulo por consola, el usuario debe elegir la 
clasificación del triángulo según sus lados, y 
que el programa calcule el otro lado.
 */

int main(void)
{
  float lado, base; 
  int opcion;
  printf("Introduzca lado del triángulo:");
  scanf("%f",&lado);
  printf("Introduzca base del triángulo:");
  scanf("%f",&base);
           
  printf("Seleccione opción:\n");
  printf("1 - Equilátero\n");
  printf("2 - Isósceles\n");
  printf("3 - Escaleno\n");
  scanf("%d",&opcion);

  switch (opcion)
    {
    case 1:
      printf("El perímetro es:%.2f\n",3*lado);
      break;
    case 2:
      printf("El perímetro es:%.2f\n",(2*lado)+base);
      break;
    case 3:
      printf("El perímetro es:%.2f\n",lado + base + sqrt(pow(lado,2)+pow(base,2)));
      break;
    default:
      printf("Opción no válida.");
      break;
    }
  return 0;
}
