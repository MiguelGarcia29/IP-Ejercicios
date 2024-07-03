#include <stdlib.h>
#include <stdio.h>

int cuenta(char *cad, char c){

    int veces = 0;

    for(int i=0;cad[i]!='\0';i++){
        if(cad[i]==c){
            veces++;
        }
    }

    return veces;
}

int main(){
    char *c1[20];
    printf("Introduzca la cadena: ");
    fgets(c1,20,stdin);
    printf("Introduzca un caracter a buscar: ");
    char c;
    scanf(" %c",&c);
    printf("El caracter %c, aparece en la frase: %s %d veces",c,c1,cuenta(c1,c));
}