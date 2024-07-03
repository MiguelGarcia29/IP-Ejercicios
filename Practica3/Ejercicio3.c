#include <stdio.h>

int realizar_operacion(int,int,char);

//cabecera: int realizar_operacion(int a, int b, char op);
//precondicion: comprueba que si es division no sea entre 0
//postcondicion: devuelve la operacion que se indique entre dos numeros
int realizar_operacion(int a, int b, char op){

    int c;

    switch(op){

        case '+':
                c = a +b;
                break;
        case '-':
                c = a-b;
                break;
        case '*':
                c = a*b;
                break;
        case '/':
                if(b!=0)
                    c = a/b;
                else
                    c = 0;
                break;
       default:
                c = 0;

    }


    return c;
}

int main(){

    int n1=2;
    int n2=3;
    char op='+';

    if(n2==0 && op == '/'){
        printf("No se puede dividir entre 0");
    }else{
        printf("El resultado de %d %c %d = %d", n1,op,n2,realizar_operacion(n1,n2,op));
    }

    


}