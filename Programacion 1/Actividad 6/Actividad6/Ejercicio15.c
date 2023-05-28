//15- Cargar un vector con los nombres de los d�as de la semana, luego ingresar un n�mero (validar
//que se encuentre entre 1 y 7, mostrando un mensaje de error si ello no ocurre) y mostrar que d�a
//de la semana le corresponde a ese n�mero (1: domingo, 7: s�bado).

int Ejercicio15(){
    int seleccion;
    char diasSemana[][7] = {"Domingo","Lunes","Martes","Miercoles","Jueves","Viernes","Sabado"};

    printf("Ingrese un numero de la semana: ");
    scanf("%d",&seleccion);

    while(seleccion >= 0 && seleccion <= 7){
        printf("\nEl d�a numero %d es: %s ",seleccion, diasSemana[seleccion-1]);

        printf("\nIngrese un numero de la semana: ");
        scanf("%d",&seleccion);
    }
    printf("ERROR");
    return 0;
}
