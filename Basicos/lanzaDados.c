/*
    hacer un juego donde el programa simule el lanzamiento de 2 dados
    y la suma de estos dos genere puntos. El juego finaliza cuando el numero de ambs dados
    son iguales.
    Al finalizar el juego se debe mostrar por pantalla la siguiente información:

            - cantidad de ejecuciones
            - total de puntos sumados
            - el numero mas bajo
            - el numero mas alto
            - el numero que mas se repitio en toda la partida

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <conio.h> // solo por el getch()

int main()
{
    // genero valores aleatorios del 1 al 6 para simular el azar de los dados
    srand(time(NULL));   // necesita la libreria time.h
    int desde = 1, hasta = 6; // declaro e inicializo los valores (desde y hasta) de los datos
    int dado1, dado2;
    int puntos, ejecuciones, min, max, moda; // declaro e inicializo las var de juegomoda;
    int tabla[6][2];
    char opcion;

    // inicializo tabla con los numero de los datos
    for (int i = 0; i < 6; i++) tabla[i][0] = i + 1;
    

    // Titulo del Juego
    do{
        system("cls");
        puts("Nueva Partida!\nSuerte!!\n\n");
        // declaro e inicializo todas las variables
        fflush(stdin);
        opcion = 0;
        for (int i = 0; i < 6; i++) tabla[i][1] = 0;
        dado1 = 0, dado2 = 0;
        puntos = 0, ejecuciones = 0, min = 0, max = 0, moda = 0;
    
        do{
            dado1 = desde + rand() / (RAND_MAX / (hasta - desde + 1) + 1);
            dado2 = desde + rand() / (RAND_MAX / (hasta - desde + 1) + 1);

            // acumulo los puntos con la suma de los dados
            puntos += dado1 + dado2;
            // inicializo los valores minimos y maximos
            if (ejecuciones == 0)
            {
                min = dado1 + dado2;
                max = dado1 + dado2;
            }

            // calculo valor mas baja
            if ((dado1 + dado2) < min)
                min = dado1 + dado2;
            // calculo valor mas alto
            if ((dado1 + dado2) > max)
                max = dado1 + dado2;

            // calculo el valor que mas se repitió
            // para dado1
            switch (dado1)
            {
            case 1:
                tabla[0][1] += 1;
                break;
            case 2:
                tabla[1][1] += 1;
                break;
            case 3:
                tabla[2][1] += 1;
                break;
            case 4:
                tabla[3][1] += 1;
                break;
            case 5:
                tabla[4][1] += 1;
                break;
            case 6:
                tabla[5][1] += 1;
                break;
            }

            // para dado2
            switch (dado2)
            {
            case 1:
                tabla[0][1] += 1;
                break;
            case 2:
                tabla[1][1] += 1;
                break;
            case 3:
                tabla[2][1] += 1;
                break;
            case 4:
                tabla[3][1] += 1;
                break;
            case 5:
                tabla[4][1] += 1;
                break;
            case 6:
                tabla[5][1] += 1;
                break;
            }

            // contador de ejecuciones
            ejecuciones++;

            // muestro los tiros y total de puntos por tiro
            printf(" %d + %d = %d\n", dado1, dado2, (dado1 + dado2));
            Sleep(500); // pausa en miliseg. se necesita la libreria windows.h

        } while (dado1 != dado2); // condicion para seguir lanzando dados...

        // calcula moda
        for (int i = 0; i < 6; i++)
            if (tabla[i][1] > moda)
                moda = tabla[i][0];

        printf("\nPuntos: %d", puntos);
        printf("\nEjecuciones: %d", ejecuciones);
        printf("\nMinimo: %d", min);
        printf("\nMaximo: %d", max);
        printf("\nModa: %d", moda);
        puts("\n\nPresione [ENTER] para continuar o [ESC] para salir...");
        opcion = getch();

    } while (opcion != 27);

    return 0;
}
