/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos


#include <stdio.h>


int max(float x, float y);


int main(){

int m, n;


do{

puts("\v\t\t\t\tIngresa dos numeros enteros separados por un espacio");
puts("\t\t Para salir ingresa el primer valor = 0");

scanf("%d  %d", &m, &n);

printf("\tmaximo valor entre %d y %d es %d\n", m, n, max(m, n));
}while(m!=0);


return 0;
}




int max(float x, float y){
if(x < y){
	return y;
}else{
	return x;
}

}



