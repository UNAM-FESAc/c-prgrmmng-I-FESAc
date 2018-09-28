/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos


/*
Este archivo implementa un condicional y un bucle.
*/

#include <stdio.h>

int main()
{

   int n, a;

   a = 0;
   do
   {
      printf( "Introduzca un numero entero: " );
      scanf( "%d", &n );

      if ( n == 0 )
      {
         printf( "ERROR: El cero es su mismo opuesto.\n" );
         break;

      }
      printf( "El opuesto es: %d\n", -n );
      a += n;
   } while ( n >= -10 && n <= 10 );

   printf( "Suma: %d\n", a );

   return 0;
}
