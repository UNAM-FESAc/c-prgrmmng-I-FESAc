#include <stdio.h>

int main(){

int var = 20;
int *ip;
ip =&var;

printf("valor var =%i (entero)\n",var);
printf("valor var =%x (hexadecimal)\n",var);
printf("valor *ip = %i (entero)\n",*ip);
printf("valor *ip = %x (hexadecimal)\n",*ip);
return 0;
}
