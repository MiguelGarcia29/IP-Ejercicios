#include <math.h>
#include <stdio.h>

int obtenerFactorial(int);
double obtenerBinomio(int ,int);

// cabecera: int obtenerFactorial (int x);
// precondicion:
// postcondicion: devuelve el factorial de un numero
int obtenerFactorial(int x){
    int a = 1;

    for(int i=1;i<=x;i++){

        a *= i;

    }

    return a;
}

// cabecera: int obtenerFactorial (int n,int k);
// precondicion: n<=k
// postcondicion: devuelve el factorial de un numero
double obtenerBinomio (int n,int k){

    double resultado = (double)obtenerFactorial(n)/(obtenerFactorial(k)*obtenerFactorial(n-k));

    return resultado;
}

int main(){

    int n,k;
    printf("Introduzca el valor de n: ");
    scanf("%d",&n);

    printf("Introduzca el valor de k: ");
    scanf("%d",&k);

    printf("El resultado es: %lf\n",obtenerBinomio(n,k));

    return 0;
}
