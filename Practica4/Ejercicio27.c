#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 3

typedef struct
{
    char nombre[20];
    char apellido[20];
    char DNI[9];
    int edad;
} Persona;

void inicializarPersona(Persona personas[])
{

    for (int i = 0; i < N; i++)
    {
        printf("Introduzca un nombre:");
        fgets(&personas[i].nombre, 20, stdin);

        printf("Introduzca un apellido:");
        fgets(&personas[i].apellido, 20, stdin);

        printf("Introduzca un DNI:");
        fgets(&personas[i].DNI, 9, stdin);

        printf("Introduzca una edad:");
        scanf(" %d", &personas[i].edad);

        
    }
}

int busca_persona(Persona x[], char *dni)
{
    int edad = -1;
    for (int i = 0; i < N && edad != -1; i++)
    {
        if (strcmp(x[i].DNI, *dni))
        {
            edad = x[i].edad;
        }
    }
}

int main()
{

    Persona personas[N];
    inicializarPersona(personas);

    char buscando = 'y';
    while (buscando == 'y')
    {

        printf("Quieres buscar edad de usuario: y/n");
        scanf(" %c", &buscando);
        if (buscando == 'y')
        {
            char DNI[9];
            printf("Introduzca un DNI:");
            fgets(DNI, 9, stdin);
            int edad = busca_persona(personas, DNI);
            
            if(edad==-1){
                printf("No se encontró edad");
            }else{
                printf("La edad es %d",edad);
            }
        }
    }

    return 0;
}