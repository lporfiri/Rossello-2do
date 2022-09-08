#include <stdio.h>

int suma(int num1, int num2){
    return num1 + num2;
}
void  multiplicame(int *a){
    *a *= *a;
}

int main(void)
{
    int a, b;
    a = 10;
    b = 20;
    int resultado = suma(a,b);
    printf("%i",resultado);

    multiplicame(&a);
    printf("%d",a);



    return 0;
}
