#include <stdio.h>
/*

Este archivo implementa un condicional y un bucle; ademas introduce la sentencia 
break y continue dentro del condicional.
Tomaod de:

http://www.carlospes.com/curso_de_lenguaje_c/04_01_instruccion_break.php
*/


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

         /* En el caso de que n sea un cero,
            el bucle se interrumpe. */

      /* cambiar break por continue 
        En el caso de que n sea un cero,
         la iteración en curso del bucle
         se interrumpe aquí. */

      }
      printf( "El opuesto es: %d\n", -n );
      a += n;
   } while ( n >= -10 && n <= 10 );

   printf( "Suma: %d\n", a );

   return 0;
}
