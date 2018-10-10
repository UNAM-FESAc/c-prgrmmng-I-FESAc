/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <stdio.h>

/*
En este programa se introducen diferentes 
condicionales. 
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
        printf("%d\n",num1);
        printf("%d\n",num2);
        printf("%d\n",num3);
       }
       else
       {
        printf("%d\n",num1);
        printf("%d\n",num3);
        printf("%d\n",num2);
       }
    }
    else if (num2<num1 && num2<num3)
    {
       if (num1<num3)
       {
        printf("%d\n",num2);
        printf("%d\n",num1);
        printf("%d\n",num3);
       }
       else
       {
        printf("%d\n",num2);
        printf("%d\n",num3);
        printf("%d\n",num1);
       }
    }
    else if (num3<num1 && num3<num2)
    {
       if (num1<num2)
       {
        printf("%d\n",num3);
        printf("%d\n",num1);
        printf("%d\n",num2);
       }
       else
       {
        printf("%d\n",num3);
        printf("%d\n",num2);
        printf("%d\n",num1);
       }
    }
        printf("\n");
     return 0;
}
