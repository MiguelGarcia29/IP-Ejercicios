#include <stdio.h>
#include <math.h>
#define N 4

// cabecera void leerVector(int *vector)
// precondicion:
// postcondicion:
void leerVector(int *v)
{
    for (int i = 0; i < N; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");
}

void inicializarVector(int *vec)
{
    for (int i = 0; i < N; i++)
    {
        printf("Introduzca el elemento %d: ", i);
        scanf("%d", &vec[i]);
    }
}

// cabecera void mediaVector(int *v)
// precondicion:
// postcondicion: devuelve la media de todos los elementos del vector.

double mediaVector(int *v)
{
    
    double media = 0;
    for (int i = 0; i < N; i++)
    {
        media += v[i];
    }


    return media/N;
}

// cabecera void sumatoriomenosmedia(int *v)
// precondicion:
// postcondicion: devuelve el sumatorio de los elementos menos la media.
double sumatoriomenosmedia(int *v){

    double sumatorio=0;
    double media = mediaVector(v);
    for(int i=0;i<N;i++){
        sumatorio+=pow(v[i]-media,2);
    }

    return sumatorio;
}

double calcularDesviacion(int *v){
    double alCuadrado = sumatoriomenosmedia(v);
    double division = alCuadrado/N;
    double desviacion=sqrt(division);
    return desviacion;
}

int main()
{

    int v[N] = {100000, 2, 16, 4};

    double desviacion = calcularDesviacion(v);
    printf("La desviacion es %lf", desviacion);

    return 0;
}