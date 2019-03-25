#include <stdio.h>  
#include <stdlib.h>
#include <string.h>
#include "functionpractica1.h"


int main(int argc, char const *argv[])
{
    char string[256];
    int spc=0;
    int nr=0;
    int upper=0;
    int lower=0;

    int cont=0;

    //STRING INPUT
    printf("Introduzca una candena: \n");
    fgets(string, 256, stdin);
    printf("La cadena introducida es: %s", string);

    for(int j=0; j<strlen(string)-1; j++){
        cont=cont+1;
    }
    printf("La cantidad de caracteres introducidos es: %d\n", cont);
    //END STRING INPUT

    estadisticaCadena(string, &spc, &nr, &upper, &lower);

    printf("La cantidad de espacios es: %d\n", spc);
    printf("La cantidad de dígitos es: %d\n", nr);
    printf("La cantidad de mayusculas es: %d\n", upper);
    printf("La cantidad de minusculas es: %d\n", lower);

    return 0;
}
