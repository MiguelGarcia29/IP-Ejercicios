#include <stdio.h>

int cuadrante_eje(int,int);


//cabecera: int cuadrante_eje(int x, int y);
//precondicion:
//postcondicion: devuelve el cuadrante del eje donde se encuentra y 0 si esta en el eje
int cuadrante_eje(int x, int y){

    int c;

    if(x==0|y==0){
        c=0;
    }

    if(x>0){
        if(y>0){
            c = 1;
        }else{
            c= 3;
        }
    }else{
        if(y>0){
            c = 2;
        }else{
            c= 4;
        }
    }
    
    return c;
}

int main(){

    int x = 1;
    int y = -1;

    printf("Las cordenadas %d,%d estan en el cuadrante %d",x,y,cuadrante_eje(x,y));

    return 0;
}