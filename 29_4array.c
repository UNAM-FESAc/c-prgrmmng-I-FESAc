/* 
Arreglos bidimensionales

Estos son arreglos de arreglos, cuya forma general es:

TIPO_de_DATO NOMBRE_ARREGLO[Num_filas][Num_columnas]


Los indices estan dados de la siguiente forma:

TIPO_de_DATO NOMBRE_ARREGLO[2][2]={
{0,0}, {0,1},
{1,0}, {1,1}
}

 */
#include<stdio.h>

void main(){
register  int i=0,j=0;
float a[2][2]={1,2,3,4};

 for(i=0;i<=1;i++)
   {
     for(j=0;j<=1;j++){
       printf("Los elementos son: %f\n",a[i][j]);
   }
   }
}
