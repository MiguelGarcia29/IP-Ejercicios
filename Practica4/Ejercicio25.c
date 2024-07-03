#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void comprimir(char *cad1, char* cad2){
    int seEncuentraCaracter;
    for(int i=0;i<strlen(cad2);i++){
        seEncuentraCaracter=1;
        for(int j=0;j<strlen(cad1)&&seEncuentraCaracter;j++){
            if(cad2[i]==cad1[j]){
                cad2[i]='_';
                seEncuentraCaracter=0;
            }
        }
    }
}

int main(){

    char cad[]="Hola";
    char c[]="Coac";

    comprimir(c,cad);
    printf("Comprimido: %s",cad);

    return 0;
}