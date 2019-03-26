#include <stdio.h>
#include <math.h>
#include "functionpractica1.h"

int main()
{
    int i = 0;
    int size = 0;
    int *v;

    estadisticasVector(i, size, &v);

    free(v);

    return 0;
}
