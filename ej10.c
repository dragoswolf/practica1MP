#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "functionpractica1.h"
#include <string.h> 

int main(int argc, char const *argv[])
{
char string[256];
char suf[256];
int sufx;
char pref[256];
int prefx;

createString(string);

prefx=esPrefijo(string, pref);

if (prefx==1){
    printf("La cadena es prefijo.\n");
}
else{
    printf("La cadena no es prefijo.\n");
}


sufx=esSufijo(string, suf);

if (sufx==1){
    printf("La cadena es sufijo");
}
else{
    printf("La cadena no es sufijo");
}

}
