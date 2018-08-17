/*
En este programa implementamos un for anidado
*/



#include <stdio.h>
int main(){

int i, j, n;

n=0;				//P1
for (i=1; i<=2; i++){		//P2
	for(j=5; j>=1; j-=2){	//P3
	n = (n + i + j);	//P4
	}			//P5
}				//P6
printf("n vale %d\n", n);	//P7
return 0;
}


/*
Explicación por paso (P)

P1	n = 0
P2	  i = 1						i = 2
P3	    j = 5	j = 3		j = 1		  j = 5		j = 3		j = 1
P4		n = 6	    n = 10	    n = 12	      n = 19	    n = 24	    n = 27
P5	    j = 3	j = 1				  j = 3		j = 1			
p6		B_j		B_j				B_j		B_j
P7						B_i						FIN
*/




