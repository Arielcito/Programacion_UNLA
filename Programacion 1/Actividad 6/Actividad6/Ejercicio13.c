//13- Ingresar una cadena de caracteres e indicar si la misma es un palíndromo. Realizar esta
//operación cuantas veces se desee, hasta que el usuario ingrese la cadena “SALIR”. Un
//palíndromo es una palabra que se lee igual de izquierda a derecha o de derecha a izquierda
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int Ejercicio13(){
    int index, i,leftIndex,rightIndex;
    char inputString[100];
    bool isPalindromo = false;

    printf("Ingrese una palabra o escriba SALIR: ");
    scanf("%s", inputString);

    while(inputString != "SALIR"){
        int length = strlen(inputString);

        leftIndex = 0;
        rightIndex = length - 1;
        while (leftIndex < rightIndex) {
            if (inputString[leftIndex] != inputString[rightIndex]) {
                printf("%s no es un Palindromo \n", inputString);
                return 0;
            }
            leftIndex++;
            rightIndex--;
        }

        printf("%s es palindromo \n", inputString);
        printf("Ingrese una palabra: ");
        scanf("%s", inputString);
    }

    return 0;
}
