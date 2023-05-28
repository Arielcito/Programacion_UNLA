//14- Escriba un programa que inserte un carácter en una determinada posición de una cadena
//ingresada por el usuario.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Ejercicio14(){
    int index, i;
    char cadena[100], letra;

    printf("Ingrese una cadena de texto: ");
    scanf("%s", cadena);
    printf("Ingrese la letra a insertar: ");
    scanf(" %c", &letra); // Note the space before %c to consume any whitespace

    printf("Ingrese la posicion a insertar: ");
    scanf("%d", &index);

    // Shift characters to the right of the insertion point
    int length = strlen(cadena);
    for (i = length; i >= index; i--) {
        cadena[i + 1] = cadena[i];
    }

    // Insert the new character
    cadena[index] = letra;

    printf("La palabra final es: %s\n", cadena);
    return 0;
}
