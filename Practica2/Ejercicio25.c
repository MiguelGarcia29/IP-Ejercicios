#include <math.h>
#include <stdio.h>

int main()
{

    int numero, cantidadVecesDivididas, resultado;
    printf("Introduzca un numero\n");
    scanf("%d", &numero);
    int puedoDividir;
    for(int i=2; i<=numero && puedoDividir; i++){

        int puedoSeguir = 1;
        cantidadVecesDivididas = 0;
        while (puedoSeguir)
        {
            if(numero%i!=0){
                puedoSeguir=0;
            }else{
                numero /= i;
                cantidadVecesDivididas++;
            }
        }
        
        if(cantidadVecesDivididas!=0)
        printf("%d elevado %d\n",i,cantidadVecesDivididas);

        if(numero==1){
            puedoDividir=0;
        }
    }

    return 0;
}