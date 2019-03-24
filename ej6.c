#include <stdio.h>
#include "functionpractica1.h"

int main(int argc, char const *argv[])
{
    int num1 = 5;
    int num2 = 7;

    int *max;

    printf("===PASO POR VALOR===\n");
    minimo(num1, num2);

    printf("===PASO POR REFERENCIA===\n");
    minimo_referencia(num1, num2, &max);
    printf("El número más pequeño de los indicados es: %d\n", max);

    return 0;
}
