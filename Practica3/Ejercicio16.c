#include <stdio.h>

void mostrarDigitos(int *d);
int tamanioNumero(int a);

//cabecera:
//precondicion:
//postcondicion:
void mostrarDigitos(int *d){

    int numero = *d;
    int sePuedeDividir = 1;
    int tamanioN = tamanioNumero(numero);

    for(int i = tamanioN-1; i>=0;i--){
        int multiplo10 = pow(10,i);
        int digito= numero/pow(10,i);
        numero -= digito*multiplo10;
        printf("%d ",digito);
    }

}

int tamanioNumero(int n){

    int sePuedeDividir=1;
    int tamanio = 1;
    while (sePuedeDividir){
        double multiplo10 = pow(10,tamanio);
        double resultado = n/multiplo10;
        if(resultado<1){
            sePuedeDividir=0;
        }
        else{
            tamanio ++;
        }
    }

    return tamanio;
}

int main(){
    printf("Introduzca un numero: ");
    int x;
    scanf("%d",&x);
    mostrarDigitos(&x);
}