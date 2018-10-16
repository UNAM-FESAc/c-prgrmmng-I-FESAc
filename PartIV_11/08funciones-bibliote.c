/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos



#include <stdio.h>
#include <ctype.h>

int main(){
char resp;

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

