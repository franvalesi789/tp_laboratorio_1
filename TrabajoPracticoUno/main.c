#include <stdlib.h>
#include "Operaciones.h"

// LLamo a la biblioteca que contiene las funciones a utilizar en el main

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

        //Aqui se arma la estructura de control del menu de opciones

        switch(opcion)
        {

        case 'a' :
            resultado = sumar(numeroUno,numeroDos);
            printf("\nEl resultado de %d + %d = %.2f \n", numeroUno,numeroDos,resultado);
            break;
        case 'b' :
            resultado = restar(numeroUno,numeroDos);
            printf("\nEl resultado de %d - %d = %.2f \n", numeroUno,numeroDos,resultado);
            break;
        case 'c' :
            if(numeroDos != 0)
            {
                resultado = dividir(numeroUno,numeroDos);
                printf("\nEl resultado de %d / %d = %.2f \n", numeroUno,numeroDos,resultado);
            }
            else
            {
                printf("\nNo se puede dividir por 0\n");
            }
            break;

        case 'd' :
            resultado = multiplicar(numeroUno, numeroDos);
            printf("\nEl resultado de %d * %d = %.2f \n", numeroUno, numeroDos, resultado);
            break;
        case 'e' :
            if(numeroUno == '0')
            {
                printf("\nEl factorial de %d es: 1 \n", numeroUno);
            }
            else if(numeroUno < 0)
            {
                printf("\nEl factorial de %d no se puede realizar \n",numeroUno);
            }
            else
            {
                resultado = factorial(numeroUno);
                printf("\nEl factorial de %d es: %.2f\n", numeroUno, resultado);
            }
            if(numeroDos == '0')
            {
                printf("\nEl factorial de %d es: 1 \n", numeroDos);
            }
            else if(numeroDos < 0)
            {
                printf("\nEl factorial de %d no se puede realizar \n",numeroDos);
            }
            else
            {
                resultado = factorial(numeroDos);
                printf("\nEl factorial de %d es: %.2f\n", numeroDos, resultado);
            }
            break;

        default :
            if(opcion == 's')
            {
                printf("\n Vuelva pronto! \n");
            }
            else
            {
                printf("/n Opcion incorrecta! \n");
            }

        }

        system("pause");
        system("cls");

    }
    while(opcion != 's');

    return 0;

}
