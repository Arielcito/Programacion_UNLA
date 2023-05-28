//15- Cargar un vector con los nombres de los días de la semana, luego ingresar un número (validar
//que se encuentre entre 1 y 7, mostrando un mensaje de error si ello no ocurre) y mostrar que día
//de la semana le corresponde a ese número (1: domingo, 7: sábado).

int Ejercicio15(){
    int seleccion;
    char diasSemana[][7] = {"Domingo","Lunes","Martes","Miercoles","Jueves","Viernes","Sabado"};

    printf("Ingrese un numero de la semana: ");
    scanf("%d",&seleccion);

    while(seleccion >= 0 && seleccion <= 7){
        printf("\nEl día numero %d es: %s ",seleccion, diasSemana[seleccion-1]);

        printf("\nIngrese un numero de la semana: ");
        scanf("%d",&seleccion);
    }
    printf("ERROR");
    return 0;
}
