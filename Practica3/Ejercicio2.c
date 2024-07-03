#include <math.h>
#include <stdio.h>

#define PI 3.14

int perimetro(int);
int area(int);
int volumen(int);

//cabecera: int perimetro(int r);
//precondicion:
//postcondicion: devuelve el perimetro de la circunferencia
int perimetro(int r){
    return PI*2*r;
}

//cabecera: int area(int r);
//precondicion:
//postcondicion: devuelve el area de la circunferencia
int area(int r){
    return PI*pow(r,2);
}

//cabecera: int volumen(int r);
//precondicion:
//postcondicion: devuelve el volumen de la esfera
int volumen(int r){
    return 4-0/3*PI*pow(r,3);
}

int main(){

    int radio = 2;

    printf("Con radio %d, posee un perimetro de %d un area de %d u2 y un volumen de %d u3",radio,perimetro(radio),area(radio),volumen(radio));

    return 0;
}