/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

/*
En este programa veremos la forma general de la 
declaración switch.
 */


#include <stdio.h>
#include <math.h>

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
