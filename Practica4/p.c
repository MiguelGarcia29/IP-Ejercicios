#include <stdio.h>

typedef struct {
    char nombre[101];
    char apellidos[30];
    int dni;
} Persona;

void escribir_persona(Persona *p, int n) {
    for (int i = 0; i < n; i++) {
        printf("Nombre: %s, Apellidos: %s, DNI: %d\n", p[i].nombre, p[i].apellidos, p[i].dni);
    }
}

int main() {
    // Declarar un array de Personas
    Persona personas[20];

    // Inicializar datos de ejemplo
    for (int i = 0; i < 20; i++) {
        // Supongamos que tienes datos de ejemplo para inicializar el array personas
        // personas[i] = ...;
    }

    // Llamar a la función para escribir personas usando &personas o personas
    escribir_persona(personas, 20);

    return 0;
}