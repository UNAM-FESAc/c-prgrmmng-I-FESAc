/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos




#include <stdio.h>

void main ()
{
   int i,j;

   for(i=1; i<= 10; i++)  
   {
       for(j=0; j<=10; j++)
        {   
	printf("\n%2.1d x %2.1d = %4.1d",i, j, i*j);
	}	
    puts("\nPresiona enter para continuar");
    getchar();
   }
}
