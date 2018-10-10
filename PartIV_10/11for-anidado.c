/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

/*
for anidado. Revisar la explicación en el readme.md de esta carpeta.
*/


#include <stdio.h>
int main(){

int i, j, n=0;			//p1

for (i=1; i<=2; i++){		//P2
	for(j=5; j>=1; j-=2){	//P3
	n = (n + i + j);	//P4
	}
}				//P5
printf("n vale %d\n", n);	//P6
return 0;
}

