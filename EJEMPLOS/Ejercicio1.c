#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

// Prototipo
void mostrarArreglo(int[], int);
void ordenar(int[], int, bool);
void orden_burbuja(int[], int);

// Main
int main()
{
    // semilenlena
    srand(time(0));
    const int MIN = 10;
    const int MAX = 100;

    int array[10];

    int len = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < len; i++)
    {
        array[i] = (rand() % MAX) + MIN;
    }

    printf("\n\nlista Desordenada: \n\n");
    mostrarArreglo(array, len);
    // ordenar(array, len, false);
    orden_burbuja(array, len);
    printf("\n\nlista Ordenada: \n\n");
    mostrarArreglo(array, len);

    return 0;
}

// Funciones
void orden_burbuja(int arr[], int len)
{
    int tmp, i, j, intercambios = 0;

    for (int i = 0; i < len; i++)
    {
        for (j = len - 1; j >= i; j--)
        {
            if (arr[j] > arr[j + 1])
            {

                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
                intercambios++;
            }
        }
    }

    printf("\nTotal de intercambios: %d\n", intercambios);
}

void ordenar(int a[], int len, bool desc)
{
    int intercambios = 0;
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - 1; j++)
        {
            if (desc)
            {
                if (a[j] < a[j + 1])
                {
                    int temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                    intercambios++;
                }
            }
            else
            {
                if (a[j] > a[j + 1])
                {
                    int temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                    intercambios++;
                }
            }
        }
    }
    printf("\nTotal de intercambios: %d\n", intercambios);
}

void mostrarArreglo(int a[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%02d\t", a[i]);
    }
}
