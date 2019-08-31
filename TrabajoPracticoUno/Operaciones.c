#include "Operaciones.h"

/* llamando a la biblioteca que contiene las funciones declaradas, las inicializo para usarlas en el main solo nombrando la funcion a utilizar sin necesidad de re-escribir codigo*/

int sumar(int a,int b)
{
    int resultado;

    resultado = a + b;

    return resultado;

}

int restar(int a, int b)
{
    int resultado;

    resultado = a - b;

    return resultado;
}

float dividir(int a, int b)
{
    float resultado;

    resultado = (float)a / b;

    return resultado;
}

int multiplicar(int a, int b)
{
    int resultado;

    resultado = a*b;

    return resultado;
}

int factorial(int a)
{
    int resultado=1;
    int i;

    for(i=a; i >0 ; i--)
    {

        resultado = resultado*i;

    }

    return resultado;
}
