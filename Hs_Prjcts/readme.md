# Proyectos para llevar

En esta parte encuentras algunas prácticas de laboratorio que debes realizar en casa.
No olvides subir tu bitácora de actividades en SAE (busca el espacio reservado para tal fin).


~~~
		No dejes para el domingo lo que puedes que hacer hoy.
		_Proverbio de muy lejos_
~~~


Use el formato PDF de la [bitácora](https://www.dropbox.com/s/lr2n0dip3psg3e3/bitacora_lab.pdf?dl=0). 

### Práctica dominguera
 
1. 	Para el archivo (código fuente) de números primos debes implementar 
	el dominio [1,10], [1,15] y [1,50].
	

2.	Descarga el siguiente código y observa su salida. Descrubre qué sucede
	si cambias los números que se encuentran entre los paréntesis.
	
	```C
	#include<stdio.h>

	int main(){

	char palabras[]="Carrera de Matematicas Aplicadas y Computacion";

	printf("%s %s\n", palabras, &palabras[8]);
	puts(palabras);
	puts(&palabras[11]);
	return 0;
	}
	```

3.	Escribe un programa que muestre tu apellido con algún caracter. Debes implementar 
	secuencias de escape; Por ejemplo, la salida para mi apellido es:
~~~
	*****  *****  ****   *   *  *****
	*   *  *   *  *   *  *   *     *
	*   *  * *    *   *  *   *    *
	*   *  *  *   *  *   *   *   *
	*****  *   *  ***    *****  *****
	

4.	Escriba un código que tome una letra (mayúscula o minúscula) y le indique si 
	es una vocal, en tal caso que escriba en pantalla si es vocal abierta o cerrada. 
	Implemente una switch con cinco casos y un if-else para escribir en pantalla 
	el tipo de vocal. 
	

5.	Escriba un código que muestre un calendario, similar al calendario 
	que muestra una computadora. Es importante que use funciones creadas por el usuario.
	Evite las funciones de biblioteca.
	

6.	Implementa al menos dos de las siguientes funciones en un archivo de no más de 30 
	líneas de código: *fputs, fwrite* y *fprintf* y usa, al menos, una de las 
	siguientes funciones: *fgetc,* *fgets* y *fread*

