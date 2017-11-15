/*
(Recuerdo que los textos implementados omiten acentos)

Con este programa veremos como crear archivos externos en C.

Lo primero que debemos considerar es que usaremos el estandar <stdio.h>
que nos permite usar varias funciones para la edicion de archivos.

De forma general debes considerar las siguientes lineas:

1) Agregar un tipo 
	FILE *Nom_apuntador
2) Abrir el archivo con 
	fopen("nombre_archivo.extension", "parametros")

	nombre_archivo.extension, debes darle un nombre al archivo.

	parametros puede ser:
 		- r para leer
 		- w para escribir
		- a para escribir (crear) al final del archivo
		- r+ abre un archivo para lectura y escritura de un archivo existente
		- w+ crea o sobreescribe (en) un archivo para lectura y escritura 
	Hay otros parametros que no discutiremos por el momento.

3) Cerrar el archivo con
	  fclose (Nom_apuntador);

4) Escribir algo en el archivo:
	Podemos realizarlo de diferentes formas:

		fputc(variables_introducir, Nom_archi_apuntador) para poner caracteres en el archivo. 

****************************************************************************************************
Tarea numero 6 del archivo HMWRKS-out.txt

******************************************************************************************************
*/


#include <stdio.h>
 
int main () 
{
  FILE *archivo;
  
  char caracter;
  

  archivo = fopen ( "prueba.txt", "a" );
  
  printf("\nIntroduce un texto: \n");

  
  while((caracter = getchar()) != '\n')
    {
	fputc(caracter, archivo);
    }

 
 fclose ( archivo );

  printf("\nRevisa el archivo prueba.txt\n");    

  return 0;
}
