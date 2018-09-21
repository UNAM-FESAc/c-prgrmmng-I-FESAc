/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos


/*
Tenga cuidado con las diferencias que hay entre ++n y n++
(incrementa n en 1 y lo asigna a m; en el segundo 
caso lo asigna con su valor inicial lo imprime[si es el caso] y luego 
lo incrementa)
*/



#include <stdio.h>
int main()
{
    int a = 11;        
    int b = 10;
    float c = 10.5;
    float d = 100.5;
    
if(a!=11){
    printf("Algo anda mal a = %d\n",++a);
}
else
{
    printf("Todo bien a = %d\n", ++a);
};

if(b!=9){
    printf("Algo anda mal b = %d\n",--b);
}
else
{
    printf("Todo bien b = %d\n", --b);
};


if(c!=10.5){
    printf("Algo anda mal c = %f\n",++c);
}
else
{
    printf("Todo bien c = %f\n", ++c);
};


if(d!=99.5){
    printf("Algo anda mal d = %f\n",--d);
}
else
{
    printf("Todo bien d = %f\n", --d);
};

    return 0;
}

// El operador ++ o -- incrementa (reduce) 
// el valor de la variable en 1


