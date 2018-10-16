/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

int i;
srand(time(NULL));

for (i=1; i<=4; i++){
printf("%d\n", rand()%101); 
}

return 0;
}

