void cargarArreglo(int arreglo[], int tama);
#include <stdio.h>

void mostrarArreglo(int arreglo[], int tama);
void sumarycontarArreglo(int arreglo[], int tama);

void cargarArreglo(int arreglo[], int tama) {
    for (int i = 0; i < tama; i++)
    {
        scanf("%d",arreglo[i]);
    }
}

void sumarycontarArreglo(int arreglo[], int tama) {
    int posPares = 0, impares = 0;
    for (int i = 0; i < tama; i++)
    {
        if (arreglo[i] % 2 == 0) {
            posPares += arreglo[i];
        } 
        if (arreglo[i] % 2 == 0 && i % 2!= 0){
            impares++;
        }
    }
}

void mostrarArreglo(int arreglo[], int tama) {
    for (int i = 0; i < tama; i++)
    {
        printf("Numero %d: %d \n", i ,arreglo[i]);
    }
}