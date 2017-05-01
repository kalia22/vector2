#include <stdio.h>
#include <stdlib.h>
#include "vector.h"


typedef struct {
    TELEMENTO *cifras;
    int signo;
    unsigned long int tam;
}STENTERO;
typedef STENTERO *entero; 



void creaEnteroLargo(entero *v1, unsigned long int tam1, char signo){

    unsigned long int i=0;
    *v1=(entero)malloc(sizeof(STENTERO));
    (*v1)->cifras=(TELEMENTO*)malloc(tam1*sizeof(TELEMENTO)); //TELEMENTO por entero
    (*v1)->tam=tam1;
    for(i=0; i < tam1; i++){
        *((*v1)->cifras+i) = 0;
}
void asignarEntero(entero *v1, unsigned long int posicion, TELEMENTO valor)
{
    *((*v1)->cifras+posicion)=valor;
}

void liberarEntero(entero *v1){

    free(*v1);

}

TELEMENTO recuperarEntero(entero v1, unsigned long int posicion){

    if (posicion >= 0 && posicion < v1->tam)
    {
        return v1->cifras[posicion];
    }
    return 0;

}

unsigned long int tamanhoEnt(entero v1){

    return v1->tam;
}

}
