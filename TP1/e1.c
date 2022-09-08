/*
    1.	Pida al usuario que introduzca una frase y cambie los espacios por guiones (por ejemplo: "como estas, Juan" ->"como-estas,-Juan"). Implemente la función Guion que realice esta tarea.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

void reemplazaCadena(char *, char, char );

int main(int argc, char const *argv[])
{
    char text[MAX];
    printf("Ingrese un texto: ");
    fflush(stdin);
    scanf("%[^\n]s",text );
    //fgets(text,MAX,stdin);
    
    system("cls");
    
    printf("Texto originarl: %s\n", text);

   for (int i = 0; i < strlen(text); i++)
    {
        if(text[i] == ' ') text[i] = '-';
    }

    printf("Texto reemplazado: %s\n", text);

    system("pause");

    return 0;
}
// void reemplazaCadena(char * str, char s1, char s2 ){
//     int count = strlen(str);
//     for (int i = 0; i < count; i++)
//     {   
//         if(str[i] == s1) str[i] = s2;
        
//     }
    
// }