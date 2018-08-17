

/*
Revisar
https://www.programiz.com/c-programming/c-multi-dimensional-arrays

https://www.le.ac.uk/users/rjm1/cotter/page_54.htm

Este archivo calcula un promedio, usando arreglos
 */

#include <stdio.h>


int promedio(int x);


int main()
{
  int n;

  printf("Ingrese el total de numeros: ");
  scanf("%i", &n);
  promedio(n);

  return 0;
}


int promedio(int x)
{
  int i, marks[10], prom, sum=0;

  for(i=0; i<x; ++i)
    {
      printf("Ingrese un numero%i: ",i+1);
      scanf("%d", &marks[i]);
      sum += marks[i];
    }
  prom = sum/x;

  printf("Promedio = %d\n", prom);
  return 0;
}
