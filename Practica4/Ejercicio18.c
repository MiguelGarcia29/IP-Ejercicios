#include <stdio.h>
#include <stdlib.h>

void concatener(char *c1, char *c2);

//cabecera: void concatener(char *c1, char *c2);
//precondicion: 
//postcondicion: devuelve la cadena c1 añadida a la cadena c2

void concatener(char *c1, char *c2){
    int i,j;
    for(i=0;c1[i]!='\0'&&c1[i]!='\n';i++);
    for(j=0;c2[j]!='\0'&&c2[j]!='\n';j++);
    for(int x = j;x<(j+i);x++){
        c2[x]=c1[x-j];
    }

}

int main(){
    char c1[10], c2[21];
    printf("Introduzca la cadena uno: ");
    fgets(c1,10,stdin);
    printf("Introduzca la cadena dos: ");
    fgets(c2,10,stdin);

    concatener(c1,c2);
    printf("La concatenacion es %s",c2);

}