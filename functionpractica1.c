#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include "functionpractica1.h"

// NOTA: Si da error de "undefined reference to 'mathematical operation goes here'" compilar con -lm al final



//EJERCICIO 6
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
void minimo_referencia(int num1, int num2, int *min)
{
    if (num1 < num2)
    {
        
        *min = num1;
    }
    else
    {
        *min = num2;
    }
}
//FIN EJERCICIO 6

//EJERCICIO 7
void estadisticasVector(int i, int size, int *v)
{
    printf("Introduzca números enteros. Si quiere dejar de introducir, introduzca '-1'\n");
    int k=0; //array runner
    int sum=0; //sum variable for array sum
    float media=0; //average variable for average function
    float var=0; //variance variable for variance function
    float dev=0; //standard deviation variable for standard deviation function

    //MEMORY ALLOCATION
    v = (int *)calloc(size, sizeof(int)); //memory allocation initialized to 0 instead of trash
    if(v!=NULL){
        printf("Memoria asignada correctamente.\n");
    }

    //ARRAY ELEMENTS ASIGNATION
    printf("Escriba un número.\n");
    while(scanf("%d", &i)==1 && i!=-1){
        size++;
        v=(int*)realloc(v, (size)*sizeof(int)*2);
        v[k]=i;
        k++;        
        printf("Escriba un número.\n");
    }

    printf("Array Results:\n");
    for(int j=0; j<size; j++){
        printf("%d\n", v[j]);
    }

    //MEDIA

    for(int l=0; l<size; l++){
        sum=sum+v[l];
    }
    printf("La suma de los elementos del vector es: %d\n", sum);

    media=sum/size;

    printf("La media de los elementos del vector es: %f\n", media);

    //FIN MEDIA

    //VARIANZA

    for(int m=0; m<size; m++){
        var+=pow((v[m]-media), 2);
    }

    printf("La varianza es: %f\n", var);

    //FIN VARIANZA

    //DESVIACIÓN TÍPICA

    dev=sqrt(var);
    printf("La desviación típica es: %f\n", dev);

    //FIN DESVIACIÓN TÍPICA

    free(v);
}
//FIN EJERCICIO 7

//EJERCICIO 8

void estadisticaCadena(char string[256], int *spc, int *nr, int *upper, int *lower){
    
    char c;

    for (int i=0; i<strlen(string)-1; i++){
        
        c=string[i];

        if(isspace(c)!=0){
            *spc=*spc+1;
        }
        
        if(isdigit(c)!=0){
            *nr=*nr+1;
        }

        if(isupper(c)!=0){
            *upper=*upper+1;
        }

        if(islower(c)!=0){
            *lower=*lower+1;
        }
    }
    return;
}
//FIN EJERCICIO 8


//EJERCICIO 9

struct monomio leeMonomio(){
    
    struct monomio m;
    printf("Introduzca un coeficiente: \n");
    scanf("%d", &m.coeficiente);
    printf("Introduzca un grado: \n");
    scanf("%d", &m.grado);
    
    return m;
}

void imprimeMonomio(struct monomio m){

    printf("%dX^%d", m.coeficiente, m.grado);
}

struct monomio *leePolinomio(int nMon){

    struct monomio *P;

    P=(struct monomio*)calloc(nMon, sizeof(struct monomio));
    if(P==NULL){
        printf("Error en la asignación de memoria...\n");
        exit(-1);
    }
    else{
        for(int i=0; i<nMon; i++){
            P[i]=leeMonomio();
        }
    }
    printf("Monomios asignados con éxito.\n");
    return P;
}

void imprimePolinomio(int nMon, struct monomio *P){
    printf("X=");
    for(int i=0; i<nMon; i++){
        imprimeMonomio(P[i]);
        printf(" + ");
    }
}

void minMax(struct monomio *P, int nMon, struct monomio *min, struct monomio *max){

    *min=P[0];
    *max=P[0];

    for(int i=0; i<nMon; i++){
        if(P[i].grado<(*min).grado){
            *min=P[i];
        }
        
        if(P[i].grado>(*max).grado){
            *max=P[i];
        }
    }
}

void result(struct monomio *P, int nMon, int *res, int x){

    int suma=0;
    
    for (int i=0; i<nMon; i++){
        suma=suma+pow(((P[i].coeficiente)*x),P[i].grado);
    }
    *res=suma;
}

//FIN EJERCICIO 9

//EJERCICIO 10

void createString(char string[256]){

printf("Introduzca una cadena: \n");

fgets(string, 256, stdin);

printf("La cadena introducida es:\n %s\n", string);
}

bool esPrefijo(char *string, char pref[256]){

    int j=0; //string runner

    printf("Introduzca una cadena para determinar si es prefijo de la original o no: \n");
    fgets(pref, 256, stdin);
    printf("La cadena introducida es: %s\n", pref);

    for (int i=0; i<strlen(pref)-1; i++){

        if(string[i]==pref[i]){

            return true;
        }

        else{

            return false;
        }
    }
}

bool esSufijo(char *string, char suf[256]){

    int j=0; //string runner

    printf("Introduzca una cadena para determinar si es sufijo de la original o no: \n");
    fgets(suf, 256, stdin);
    printf("La cadena introducida es: %s\n", suf);

    for(int i=0; i<strlen(string)-strlen(suf); i++){
        
        if(string[i]==suf[j]){

            return false;
        }
        else{
            
            return true;
        }

        j++;
    }
}

//FIN EJERCICIO 10