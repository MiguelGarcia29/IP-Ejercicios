#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 2

typedef struct
{
    int horaLlegada, minutoLlegada, segundoLlegada;
    int horaSalida, minutoSalida, segundoSalida;
} registroDiario;

typedef struct
{
    char nombre[10];
    char apellido[20];
    char dni[9];
    double salarioXHora;

    registroDiario jornadaSemanal[5];
} Empleado;

// Obtener horas trabajada
// Obtener todo los sueldos a pagar
// Gente que no llega a los minimos
int horasTrabajada(Empleado *empleado)
{
    int segundosTotales = 0;
    int minutosTotales = 0;
    int horasTotales = 0;

    for (int i = 0; i < 5; i++)
    {
        horasTotales += empleado[0].jornadaSemanal[i].horaLlegada - empleado[0].jornadaSemanal[i].horaSalida;
        minutosTotales += empleado[0].jornadaSemanal[i].minutoLlegada - empleado[0].jornadaSemanal[i].minutoSalida;
        segundosTotales += empleado[0].jornadaSemanal[i].segundoLlegada - empleado[0].jornadaSemanal[i].segundoSalida;
    }

    minutosTotales += segundosTotales/60;
    horasTotales += minutosTotales/60;

    return horasTotales;
}

void obtenerLosSueldos(Empleado *empresa){
    double sueldo;
    for(int i=0; i<N;i++){
        sueldo = 0;
        int trabajadas = horasTrabajadas(empresa[i]);
        if(trabajadas>=35){
            sueldo = 35 * empresa[i].salarioXHora;
            sueldo += (trabajadas-35) * empresa[i].salarioXHora * 1.1;
        }else{
            sueldo = trabajadas * empresa[i].salarioXHora;
        }
        printf("%s: %.2lf€",empresa[i].nombre,sueldo);
    }
}