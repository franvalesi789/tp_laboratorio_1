#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numeroUno;
    int numeroDos;
    char opcion;
    float resultado;

    /* Aqui se piden los valores al usuario y se le despliega el menu de opciones */
    do
    {
        printf("\nIngrese el primer valor: ");
        scanf("%d", &numeroUno);

        printf("Ingrese el segundo valor: ");
        scanf("%d", &numeroDos);

        printf("Elija la operacion deseada: \n");
        printf("a) Calcular la suma (A+B)\n");
        printf("b) Calcular la resta (A-B)\n");
        printf("c) Calcular la division (A/B)\n");
        printf("d) Calcular la multiplicacion (A*B)\n");
        printf("e) Calcular el factorial (A!)\n");
        printf("s) SALIR \n");
        fflush(stdin);
        scanf("%c", &opcion);

    }while(opcion != 's');
