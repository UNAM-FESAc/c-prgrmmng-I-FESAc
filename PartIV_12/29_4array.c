/* 
Arreglos bidimensionales

Estos son arreglos de arreglos, cuya forma general es:

TIPO_de_DATO NOMBRE_ARREGLO[Num_filas][Num_columnas]


Los indices estan dados de la siguiente forma:

TIPO_de_DATO NOMBRE_ARREGLO[3][2]={
{{1,1}, {1,2}},
{{2,1}, {2,2}},
{{3,1}, {3,2}},
}

Es importante usar los corchetes para los arreglos, pero no indispensable.
 */

#include<stdio.h>

void main(){
register  int i,j;
float a[3][2]={{1.0,5.0},{3.0,4.0},{10.0,9.0}};


 for(i=0;i<=2;i++)
   {
     for(j=0;j<=1;j++){
       printf("fila %i y colu. %i. Los elementos son: %3.1f\n",i+1, j+1, a[i][j]);
   }
   }
}

