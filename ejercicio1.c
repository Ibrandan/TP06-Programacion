#include <stdio.h>
#include <string.h>
#include <stdlib.h> // FUNCION RAND
#include <time.h> 
#include "ejercicio1.h"

#define TAMA 20

int main(void) {
    int arreNumero[TAMA], pares = 0, impares;
    srand(time(NULL));

    // Punto A

    for(int i = 0; i < 20;i++) {
        arreNumero[i] = rand() % 400;
    }
    
    sumarycontarArreglo(arreNumero, TAMA);
    mostrarArreglo(arreNumero, TAMA);

    // Punto B

    for(int i = 0; i < 20;i++) {
        cargarArreglo(arreNumero, TAMA);
        sumarycontarArreglo(arreNumero, TAMA);
        mostrarArreglo(arreNumero, TAMA);
    }

    return 0;
}
