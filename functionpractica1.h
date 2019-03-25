#ifndef FUNCTIONPRACTICA1_H_

#define FUNCTIONPRACTICA1_H_

//ESTRUCTURAS
struct monomio{
    int coeficiente;
    int grado;
};
//FIN ESTRUCTURAS

//CABECERAS
int minimo(int num1, int num2);

void minimo_referencia(int num1, int num2, int *max);

void estadisticasVector(int i, int size, int *v);

void estadisticaCadena(char string[256], int *spc, int *nr, int *upper, int *lower);

struct monomio leeMonomio();
void imprimeMonomio(struct monomio m);


//FIN CABECERAS


#endif //FUNCTIONPRACTICA1_H_
