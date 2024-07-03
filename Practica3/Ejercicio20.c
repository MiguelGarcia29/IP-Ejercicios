#include <stdio.h>
#define intercambiar(a,b){int aux=a;a=b;b=aux;}

void ordenar(int *,int *,int *);

//cabecera: void ordenar(int *a,int *b,int *c);
//precondicion:
//postcondicon: ordena los numeros en orden ascendete
void ordenar(int *a,int *b,int *c){

    if(*a>*b)
        intercambiar(*a,*b);
    if(*b>*c){
        intercambiar(*b,*c);
        if(*a>*b)
            intercambiar(*a,*b);
    }

}

int main(){

    int a,b,c;
    do{
        printf("Introduzca tres numeros: ");
        scanf("%d %d %d",&a,&b,&c);
        ordenar(&a,&b,&c);
        printf("%d<%d<%d\n",a,b,c);
    }while(a!=0);

}
