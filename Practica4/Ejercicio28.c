#include <stdio.h>
#include <stdlib.h>
#define ESTACIONES 5

typedef struct{
    char nombre[30];
    double lxm2[12];
}EstacionMetereologica;


double lluviaEnAnio(EstacionMetereologica estacion){
    double llovido = 0;
    for (int i=0;i<12;i++){
        llovido+=estacion.lxm2[i];
    }

    return llovido;
}

void inicializarEstaciones (EstacionMetereologica estaciones[]){
    for(int i=0;i<ESTACIONES;i++){
        printf("Introduzca el nombre de la estacion: ");
        fgets(estaciones[i].nombre,30,stdin);
        fflush(stdin);
        for(int j=1;j<=12;j++){
            printf("Introduzca los l x m2 el mes %d: ",j);
            scanf("%d",&estaciones[i].lxm2[j-1]);
            fflush(stdin);
        }
    }
}

EstacionMetereologica dondeMasLlueve(EstacionMetereologica estaciones[]){
    EstacionMetereologica masLluviosa = estaciones[0];
    for(int i=1; i<ESTACIONES;i++){
        if(lluviaEnAnio(estaciones[i])>lluviaEnAnio(masLluviosa)){
            masLluviosa = estaciones[i];
        }
    }

    return masLluviosa;
}

EstacionMetereologica dondeMenosLlueve(EstacionMetereologica estaciones[]){
    EstacionMetereologica menosLluvioso = estaciones[0];
    for(int i=1; i<ESTACIONES;i++){
        if(lluviaEnAnio(estaciones[i])<lluviaEnAnio(menosLluvioso)){
            menosLluvioso = estaciones[i];
        }
    }

    return menosLluvioso;
}

double mediaDeAguaPorMes(EstacionMetereologica estacion[], int mes){
    double aguaTotal = 0;
    for(int i = 0; i<ESTACIONES;i++){
        aguaTotal += estacion[i].lxm2[mes];
    }

    return aguaTotal/12;
}

void mediaPorMes(EstacionMetereologica estaciones[]){
    for(int i=0;i<12;i++){
        printf("Media en el mes %d: %d",(i+1),mediaDeAguaPorMes(estaciones,i));
    }
}





int main(){
    EstacionMetereologica est[ESTACIONES];
    inicializarEstaciones(est);
    printf("Donde mas llueve %s",dondeMasLlueve(est).nombre);
    printf("Donde mas llueve %s",dondeMenosLlueve(est).nombre);
    mediaPorMes(est);
}

