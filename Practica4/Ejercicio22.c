#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void inversa(char *cad){
    int tamanio = strlen(cad);
    for(int i=0;i<tamanio/2;i++){
        char aux = cad[i];
        cad[i] = cad[tamanio-i-1];
        cad[tamanio-i-1] = aux;
    }
}

int main(){
    char *c[20];
    printf("introduzca la cadena: ");
    fgets(c,20,stdin);
    inversa(c);
    printf("La inversa es %s",c);
}