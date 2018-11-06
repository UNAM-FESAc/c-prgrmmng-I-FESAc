/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos


#include <stdio.h>
 
int main () 
{
  FILE *archivo;
  
  char caracter;
  
  archivo = fopen ( "prueba.txt", "a" );
  
  printf("\nIntroduce un texto: \n");
  while((caracter = getchar()) != '0')
    {
	fputc(caracter, archivo);
    }

 
 fclose (archivo);
  puts("\nRevisa el archivo prueba.txt\n");    

  return 0;
}
