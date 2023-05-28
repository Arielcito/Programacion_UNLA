#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int selection;
    bool menu = true;
    while(menu){
        printf("Seleccione la actividad: ");
        scanf("%d",&selection);
        switch(selection){
        case 15:
            Ejercicio15();
         case 14:
            Ejercicio14();
           case 13:
            Ejercicio13();
        }
    }
    return 0;
}
