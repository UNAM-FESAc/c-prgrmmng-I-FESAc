/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos


#include <stdio.h>


int main () {
   char str1[60], str2[60], str3[60];
   int a = 22;

   FILE * arc_impr;

   arc_impr = fopen ("file.txt", "w+");

fputs("Estaremos en el 2019\n\r", arc_impr);
rewind(arc_impr);
fscanf(arc_impr, "%s %s %s %d\n", str1, str2, str3, &a);

printf("Imprime cadena: |%s| |%s| |%s| |%d| \n", str1, str2, str3, a);

   fclose(arc_impr);
   return 0;
}

