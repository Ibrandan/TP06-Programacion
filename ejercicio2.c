#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {

    char nombre[50], apellido[50];
    int suma = 0;

    puts("Ingrese nombre");
    gets(nombre);

    puts("Ingrese apellido");
    gets(apellido);

    printf("%s %s", apellido, nombre);

    // for (int i = 0; i < strlen(persona); i++)
    // { 
    //     if (!isspace(persona[i]))
    //     {
    //         if (isupper(persona[i]))
    //         {
    //             suma += persona[i];
    //         }
    //         printf("%c", persona[i]);
    //     }        
    // }
    
    // printf("\nSuma: %d", suma);

    return 0;
}
