//13- Ingresar una cadena de caracteres e indicar si la misma es un palíndromo. Realizar esta
//operación cuantas veces se desee, hasta que el usuario ingrese la cadena “SALIR”. Un
//palíndromo es una palabra que se lee igual de izquierda a derecha o de derecha a izquierda
#include <stdio.h>
#include <stdlib.h>
#include <bool.h>

int Ejercicio13(){
    int index, i;
    char cadena[100],reverse[100];
    bool isPalindromo = false;

    printf("Ingrese una palabra o escriba SALIR: ");
    scanf("%s", cadena);

    while(candena != "SALIR"){
        int length = strlen(cadena);
        for (i = length; i >= index; i--) {
            cadena[i + 1] = cadena[i];
        }
        if(strcmp(cadena,reverse) == 0){
            isPalindromo = true;
        }
        printf("Es palindromo?: %s\n", isPalindromo);
        printf("Ingrese una palabra: ");
        scanf("%s", cadena);
    }

    return 0;
}
