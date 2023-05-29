/*
11- Hacer un programa que ingrese dos cadenas y:
. Determine cuál de ellas es mayor en orden alfabético (sin usar strcmp).
. Concatene ambas cadenas (sin usar strcat)
. Determine cuál es más larga (sin usar strlen).
. Invierta la primera ingresada.
Definir funciones para realizar cada una de las tareas solicitadas.
El programa deberá mostrar todas las salidas con mensajes al usuario:
LA CADENA MAYOR ES ..............................
CADENAS CONCATENADAS: .............
CADENA MÁS LARGA: ................
LA CADENA cadena INVERTIDA SE LEE: .............
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cadenaMayor(char cadena1[], char cadena2[]);
void concatenarCadenas(char cadena1[], char cadena2[]);
void cademaMasLarga(char cadena1[], char cadena2[]);
void reverse(char cadena[]);

int Ejercicio11(){
    char cadena1[100],cadena2[100];

    printf("Ingrese la primera cadena: ");
    scanf("%s",cadena1);
    printf("Ingrese la segunda cadena: ");
    scanf("%s",cadena2);
    cadenaMayor(cadena1,cadena2);
    concatenarCadenas(cadena1,cadena2);
    cadenaMasLarga(cadena1,cadena2);
    reverse(cadena1);
    reverse(cadena2);

    return 0;
}
void cadenaMayor(char cadena1[], char cadena2[]){
    if(cadena1 < cadena2){
        printf("LA CADENA MAYOR ES %s\n",cadena2);
    }
    else if(cadena2 < cadena1){
        printf("LA CADENA MAYOR ES %s\n",cadena2);
    }else{
        printf("LAS CADENAS SON IGUALES\n");
    }
}

void concatenarCadenas(char cadena1[], char cadena2[]){
     int longitud1 = strlen(cadena1);
    int longitud2 = strlen(cadena2);
    char resultado[longitud1 + longitud2];
    strcpy(resultado, cadena1);
    for (int i = 0; i < longitud2; i++) {
        resultado[longitud1 + i] = cadena2[i];
    }

    resultado[longitud1 + longitud2] = '\0';

    printf("CADENAS CONCATENADAS: %s\n",resultado);
}

void cadenaMasLarga(char cadena1[], char cadena2[]){
    int length1,length2,longitud1,longitud2;

    while(cadena1[longitud1] != "\0"){
        longitud1++;
    }
     while(cadena2[longitud2] != "\0"){
        longitud2++;
    }
   if(longitud1 < longitud2){
        printf("CADENA MÁS LARGA: %s\n",cadena2);
    }
    else if(longitud2 < longitud1){
        printf("LA CADENA MAYOR ES %s\n",cadena1);
    }else{
        printf("LAS CADENAS SON IGUALES\n");
    }

}
void reverse(char cadena[]){
    int len,i;
    len = strlen(cadena);
    for(i = 0; i < len; i++){
        cadena[i] = cadena[len -i];
    }
    printf("LA CADENA cadena INVERTIDA SE LEE: %s\n",cadena);
}
