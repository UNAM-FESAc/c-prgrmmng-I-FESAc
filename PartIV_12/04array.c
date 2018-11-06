/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos


#include<stdio.h>

void main(){
register  int i,j;
float a[3][2]={{1.0,5.0},{3.0,4.0},{10.0,9.0}};


 for(i=0;i<=2;i++)
   {
     for(j=0;j<=1;j++){
       printf("fila %i y colu. %i. Los elementos son: %5.1f\n", i+1, j+1, a[i][j]);
   }
   }
}

