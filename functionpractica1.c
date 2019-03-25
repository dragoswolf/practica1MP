#include <stdio.h>
#include <math.h>
#include <stdlib.h>

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

//EJERCICIO 7
void estadisticasVector(int i, int size, int *v)
{
    printf("Introduzca números enteros. Si quiere dejar de introducir, introduzca '-1'\n");
    int k=0; //array runner
    int aux=0; //aux variable for mathematical operations
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




}

