#include <stdio.h>


int main () {
   char str1[7], str2[2], str3[2];
   int a;


   puts("Estamos en el 2017");
//   rewind(arc_impr);
   fscanf(arc_impr, "%s %s %s %d", str1, str2, str3, &a);
   
   printf("Leer cadena1 |%s| \n", str1 );
   printf("Leer cadena1 |%s| \n", str2 );
   printf("Leer cadena1 |%s| \n", str3 );
   printf("Leer entero 	|%d| \n", a );

   
   return(0);
}
