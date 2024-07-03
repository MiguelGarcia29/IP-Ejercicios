#include <stdlib.h>
#include <stdio.h>
#define POBLACION 2

typedef struct
{

    char nombre[10];
    char dni[9];
    int edad;
} persona;

void inicializa_persona(persona[]);
void copia_en_fichero(persona[], FILE *);
void lee_de_fichero(persona[], FILE *);
void mostrar_persona(persona[]);

void inicializa_persona(persona pob[])
{
    for (int i = 0; i < POBLACION; i++)
    {
        printf("Introduzca nombre: ");
        fgets(pob[i].nombre, 10, stdin);
        printf("Introduzca dni: ");
        fgets(pob[i].dni, 9, stdin);
        fflush(stdin);
        printf("Introduzca edad: ");
        scanf("%d", &pob[i].edad);
        fflush(stdin);
    }
}

void mostrar_persona(persona pob[])
{
    for (int i = 0; i < POBLACION; i++)
    {
        printf("Nombre: %s\n", pob[i].nombre);
        printf("DNI: %s\n", pob[i].dni);
        printf("Edad %d\n\n",pob[i].edad);
    }
}

void copia_en_fichero(persona pob[], FILE *f){
    fwrite(pob,sizeof(persona),POBLACION,f);
}

void lee_de_fichero(persona pob[], FILE *f){
    fread(pob,sizeof(persona),POBLACION,f);

}
int main()
{
    FILE *f;
    persona pob1[POBLACION];
    persona pob2[POBLACION];

    inicializa_persona(pob1);
    mostrar_persona(pob1);

    if((f=fopen("personas.txt","w+b"))!=NULL){
        copia_en_fichero(pob1,f);
        rewind(f);
        lee_de_fichero(pob2,f);
        mostrar_persona(pob2);


    }else{
        printf("NO SE PUDO ABRIR EL FICHER");
    }




}