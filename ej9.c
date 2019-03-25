#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "functionpractica1.h"
#include <ctype.h>

int main(int argc, char const *argv[])
{
    struct monomio m;



    //LEE E IMPRIME MONOMIO

    m=leeMonomio();
    imprimeMonomio(m);
    
    //FIN LEE E IMPRIME MONOMIO

    return 0;
}
