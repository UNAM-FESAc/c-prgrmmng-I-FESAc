/*

En este programa se crea crea un archivo, guarda información y luego la imprime en 
pantalla.

Hablaremos de las funciones en clase.


 
*/


#include <stdio.h>


int main () {
   char str1[7], str2[2], str3[2];
   int a;
   FILE *arc_impr;

   arc_impr = fopen ("file.txt", "w+");
   fputs("Estamos en el 2017", arc_impr);
   
   rewind(arc_impr);
   fscanf(arc_impr, "%s %s %s %d", str1, str2, str3, &a);
   
   printf("Imprime cadena: |%s| |%s| |%s| |%d| \n", str1, str2, str3, a);

   fclose(arc_impr);
   
   return(0);
}
