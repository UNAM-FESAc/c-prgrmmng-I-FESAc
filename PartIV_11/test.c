/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
#define M 20

int main(){
  int i, j;

srand(N);
for (i=1; i<=4; i++){
printf("%d\n", rand()%101); 
}

printf("\t\tOtra linea\n"); 

srand(M);
for (j=1; j<=4; j++){
printf("%d\n", rand()%101); 
}

return 0;
}

