#include <math.h>

float calcular(float,float);
void imprimir_respuesta(float);

//cabecera: int calcular(int res, int vol);
//precondicion: 
//postcondicion: devuelve la intensidad dado el voltaje y la resistencia
float calcular(float r, float v){
    return v/r;
}

//cabecera: int imprimir_respuesta(float vol);
//precondicion: 
//postcondicion: devuelve la intensidad dado el voltaje y la resistencia
void imprimir_respuesta(float i){
    printf("La intensidad es %f",i);
}

int main(){
    float res, vol, intensidad;  
    
    res = 2;
    vol = 2;

    //obtener_valores(&res,&vol); 
    
    intensidad= calcular(res, vol); 
    
    imprimir_respuesta(intensidad); 
    
    return 0; 
}