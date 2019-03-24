#include <stdio.h>

int minimo(int num1, int num2)
{
    if (num1 < num2)
    {
        printf("El número más pequeño es: %d\n", num1);
        return num1;
    }
    else
    {
        printf("El número más pequeño es: %d\n", num2);
        return num2;
    }
}
void minimo_referencia(int num1, int num2, int *max)
{
    if (num1 < num2)
    {
        *max = num1;
    }
    else
    {
        *max = num2;
    }
}
