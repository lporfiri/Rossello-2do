/*
    registro de libro x autores
*/
#include <stdio.h>
#include <stdlib.h>

// Declaro los registros:

struct Domicilio
{
    char ciudad[30];
    char calle[30];
    int numero;
};

struct Persona
{
    char nombre[30];
    int edad;
    struct Domicilio direccion;
};

struct Libro
{
    char nombre[30];
    int anio;
    int cantidadAutores;
    struct Persona autores[10];
};

// Progama principal:
int main(void)
{
    struct Libro libros[5];
    int N;

    printf("Ingrese la cantidad de libros: ");
    scanf("%d", &N);

    // carga de libros
    for (int i = 0; i < N; i++)
    {
        printf("Ingrese nombre del libro: ");
        fflush(stdin);
        fgets(libros[i].nombre, 100, stdin);
        printf("Ingrese anio de publicacion: ");
        scanf("%d", &libros[i].anio);
        printf("Ingrese cantidad de autores: ");
        scanf("%d", &libros[i].cantidadAutores);

        // carga de autores:
        for (int j = 0; j < libros[i].cantidadAutores; j++)
        {
            printf("Ingrese nombre del autor %d: ", j + 1);
            fflush(stdin);
            fgets(libros[i].autores[j].nombre, 100, stdin);
            printf("Ingrese edad del autor: ");
            scanf("%d", &libros[i].autores[j].edad);
            printf("Ingrese el ciudad: ");
            fflush(stdin);
            fgets(libros[i].autores[j].direccion.ciudad, 100, stdin);
            printf("Ingrese la calle: ");
            fflush(stdin);
            fgets(libros[i].autores[j].direccion.calle, 100, stdin);
            printf("Ingrese el numero: ");
            scanf("%d", &libros[i].autores[j].direccion.numero);
        }
        // fflush(stdin);
    }

    system("pause");
    system("cls");

    // Mostrar registros
    for (int i = 0; i < N; i++)
    {
        printf("Libro: %s", libros[i].nombre);
        printf("Publicacion: %d", libros[i].anio);
        printf(" - Cant. autores: %d\n", libros[i].cantidadAutores);

        // carga de autores:
        for (int j = 0; j < libros[i].cantidadAutores; j++)
        {
            printf("\nAutor %d: %s", j + 1, libros[i].autores[j].nombre);
            printf("- Edad: %d\n", libros[i].autores[j].edad);
            printf("- Ciudad: %s", libros[i].autores[j].direccion.ciudad);
            printf("- Calle: %s", libros[i].autores[j].direccion.calle);
            printf("- Nro: %d\n", libros[i].autores[j].direccion.numero);
            printf("\n");
        }
    }

    system("pause");
    return 0;
}
