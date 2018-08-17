#include <stdio.h>
/*
Ejercicio debes realizar un programa que use funciones para 
obtener la media aritmetica.
*/



int max(float x, float y){
if(x < y){
	return y;
}else{
	return x;
}

}







int main(){

int m, n;


do{
scanf("%d %d", &m, &n);
printf("maximo valor entre %d, %d es %d\n",m, n, max(m,n));
}while(m!=0);


return 0;
}





