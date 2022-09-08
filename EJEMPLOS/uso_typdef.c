#include <stdio.h>
/*
    "typedef" me permite declarar mis propios tipo de datos

    para el caso de los registros (struct) me facilita la declaración del mismo

*/
#define MAX 100 // con la macro "define" declaro una constante global llamada MAX = 100

// declaro un tipo de datos tPunto el cual representa a un struct que yo mismo cree
typedef struct
{
    float x, y;
} tPunto;

// declaro un tipo de datos tListaPuntos[MAX]
typedef tPunto tListaPuntos[MAX]; // typedef <tipo> <identificador>

tPunto sumaPuntos(tListaPuntos, int);

int main(int argc, char const *argv[])
{
    tPunto p;
    tListaPuntos lista;
    int N;

    printf("Ingrese N: ");
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        printf("Ingrese un punto (x,y): ");
        fflush(stdin);
        scanf("%f, %f", &lista[i].x, &lista[i].y);
    }

    p = sumaPuntos(lista, N);
    printf("\nSuma de x: %f", p.x);
    printf("\nSuma de y: %f", p.y);

    return 0;
}

tPunto sumaPuntos(tListaPuntos lista, int N)
{
    int i;
    tPunto p;
    p.x = 0;
    p.y = 0;

    for (i = 0; i < N; i++)
    {
        p.x += lista[i].x;
        p.y += lista[i].y;
    }
    
    return p;
}
