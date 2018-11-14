/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos
#include <stdio.h>
int n;
int promedio();

int main()
{
  printf("Ingrese la cantidad de numeros que desea introducir: ");
  scanf("%i", &n);
  promedio(n);
  return 0;
}

int promedio(int x)
{
  	int i, marks[n], sum = 0; 
	float prom;

  for(i=0; i<n; ++i)
    {
      printf("Ingrese un numero%i: ",i+1);
      scanf("%d", &marks[i]);
      sum += marks[i];
    }
  prom = (float)sum/n;

  printf("Promedio = %.2f\n", prom);
  return 0;
}
