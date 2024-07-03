#include <stdio.h>
void redondear(double,double *);

//cabecera: void redondedar(double n, double* redondeado);
//precondicion;
//postconidcion: redondea a un decimal

void redondear(double n, double *redondeado){
    double muevoLaComa = n*10;
    int parteEntera = (int)muevoLaComa;
    *redondeado=parteEntera/10.0;
}


int main(){
    double n=0;
    double unDecimal=0;
    do{
        printf("Introduzca un numero decimal: ");
        scanf("%lf",&n);
        redondear(n, &unDecimal);
        

        printf("Sin redondear: %lf\nRedondeado: %lf\n",n,unDecimal);
    }while(n!=0);

    return 0;
}