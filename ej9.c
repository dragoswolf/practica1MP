#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "functionpractica1.h"
#include <ctype.h>

int main(int argc, char const *argv[])
{
    struct monomio m;

    struct monomio *P; //vector para monomios
    int nMon=0;

    struct monomio max;
    struct monomio min;

    int x;
    int res;


    //LEE E IMPRIME MONOMIO

    m=leeMonomio();
    imprimeMonomio(m);
    
    //FIN LEE E IMPRIME MONOMIO

    //LEE E IMPRIME POLINOMIO

    printf("\nIntroduzca cuantos monomios quiere tener en su polinomio: \n");
    scanf("%d", &nMon);
    printf("Su polinomio estará construido con %d monomios.\n", nMon);
    P=leePolinomio(nMon);
    imprimePolinomio(nMon, P);

    //FIN LEE E IMPRIME POLINOMIO
    
    
    


    //EXTREMOS POLINOMIO
    minMax(P, nMon, &min, &max);

    printf("\nImprimiendo el mayor monomio: \n");
    imprimeMonomio(max);
    printf("\nImprimiendo el menor monomio: \n");
    imprimeMonomio(min);

    //FIN EXTREMOS POLINOMIO

    //RESOLUCIÓN DEL POLINOMIO EN UN PUNTO X

    printf("\nIntroduzca el valor de X: \n");
    scanf("%d", &x);

    result(P, nMon, &res, x);

    printf("El resultado de la resolución es: %d", res);

    //FIN RESOLUCIÓN DEL POLINOMIO EN UN PUNTO X

    return 0;
}
