#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char asignatura[15];
    int nota;
} Calificacion;

typedef struct{
    char nombre[10];
    char apellido[20];
    char dni[9];
    int edad;
    Calificacion notas[2];
} Alumno;

void notaGlobal(Alumno *alumno){
    for(int i=0;i<2;i++){
        printf("%s :%d\n",alumno[0].notas[i].asignatura, alumno[0].notas[i].nota);
    }
}

void mayor_nota(char *asig, Alumno *clase){

    int mayorNota = -1;
    Alumno conMayorNota;
    int asignatura;
    for(int i=0;i<2;i++){
        asignatura = 1;
        for(int j=0;j<2&&asignatura;j++){
            if(strcmp(clase[i].notas[j].asignatura,asig)==0){
                asignatura=0;
                if(mayorNota<clase[i].notas[j].nota){
                    mayorNota=clase[i].notas[j].nota;
                    conMayorNota=clase[i];
                }
            }
        }
    }

    printf("%s es el que tiene la mayor nota en %s",conMayorNota.nombre,asig);

}

int main(){

    Alumno alu[2];
    strcpy(alu[0].nombre,"Jorge");
    strcpy(alu[0].notas[0].asignatura, "Uno");
    alu[0].notas[0].nota = 3;
    strcpy(alu[0].notas[1].asignatura, "Dos");
    alu[0].notas[1].nota = 2;

    strcpy(alu[1].nombre,"Matias");
    strcpy(alu[1].notas[0].asignatura, "Uno");
    alu[1].notas[0].nota = 2;
    strcpy(alu[1].notas[1].asignatura, "Dos");
    alu[1].notas[1].nota = 3;

    notaGlobal(&alu[0]);
    mayor_nota("Uno",alu);
}