#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

/* dado un vector de enteros de numeros aleatoreos calcular el minimo y el maximo */
int main()
{

    srand(time(NULL));
    int vector[MAX];
    int min = 0, max = 0;

    for (int i = 0; i < MAX; i++)
    {

        vector[i] = rand() % 1000 + 1; // se asigna un valor entero aleatorio

        if (i == 0) // inicializo min y max en la primer iteración
        {
            min = vector[i];
            max = min;
        }

        if (vector[i] < min) // calcular el minimo
            min = vector[i];

        if (vector[i] > max) // calcular el maximo
            max = vector[i];

        // Mostrar valores del vector en una matriz de 10 saltos
        printf("%3d ", vector[i]);
        if ((i+1) % 10 == 0)
            printf("\n");
    }

    printf("\nel valor mayor es: %d", max);
    printf("\nel valor menor es: %d", min);
    printf("\nSobre un total de : %d", MAX);

    return 0;
}
