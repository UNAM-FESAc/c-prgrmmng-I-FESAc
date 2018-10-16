/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos


#include <stdio.h>





int max(float x, float y);



int main(){

int m, n;


do{
scanf("%d %d", &m, &n);
printf("maximo valor entre %d, %d es %d\n",m, n, max(m,n));
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

