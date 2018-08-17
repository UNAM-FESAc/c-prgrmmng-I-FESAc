/*
la funcion 

toupper()

convierte los caracteres a mayusculas.

Ejecuta el programa e introduce otros caracteres 
para observar lo que sucede.

*/



#include <stdio.h>
#include <ctype.h>

int main(){
char resp;
char c ;



printf ("¿Cuál es tu género (H/M)?: " );
	scanf ("%c",&resp) ;
	
	resp=toupper(resp);

switch(resp)
{
	case 'H':
	puts ("Eres un estudiante");
	break;
	case 'M':
	puts ("Eres una estudiante");
	break;
	default:
	puts("No quieres mencionarlo") ;
	break;
}
return 0;
}




(*
Ejercicio del estudiante es crear un cuestionario de 10 preguntas. 
Al final debe mostrarse un parráfo con las respuestas.
Puedes usar diferentes funciones de biblioteca.
*)
