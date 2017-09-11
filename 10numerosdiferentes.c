#include <stdio.h>

/*
En este programa se introducen diferentes 
condicionales. 
La primer parte de este trabajo en clase es 
realizar un pseudocodigo y dar una salida 
legible para aquel usuario que tenga el 
archivo ejecutable.

 */

int main(void)
{
            int num1,num2,num3;
           
            printf("Introduzca número 1:");
    scanf("%d",&num1);

            printf("Introduzca número 2:");
    scanf("%d",&num2);

            printf("Introduzca número 3:");
    scanf("%d",&num3);

    if (num1<num2 && num1<num3)
    {
       if (num2<num3)
       {
        printf("%d",num1);
        printf("%d",num2);
        printf("%d",num3);
       }
       else
       {
        printf("%d",num1);
        printf("%d",num3);
        printf("%d",num2);
       }
    }
    else if (num2<num1 && num2<num3)
    {
       if (num1<num3)
       {
        printf("%d",num2);
        printf("%d",num1);
        printf("%d",num3);
       }
       else
       {
        printf("%d",num2);
        printf("%d",num3);
        printf("%d",num1);
       }
    }
    else if (num3<num1 && num3<num2)
    {
       if (num1<num2)
       {
        printf("%d",num3);
        printf("%d",num1);
        printf("%d",num2);
       }
       else
       {
        printf("%d",num3);
        printf("%d",num2);
        printf("%d",num1);
       }
    }
        printf("\n");
     return 0;
}
