#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <windows.h>

int main()
{
    srand(time(NULL));
    int minimo = 3, maximo = 10, i = 0;

    while (true)
    {
        int aletorio = minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
        printf("%2d ", aletorio);
        if ((i + 1) % 10 == 0)
            printf("\n");
        Sleep(100);
        i++;
    }

    return 0;
}
