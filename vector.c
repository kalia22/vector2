#include <stdio.h>
#include <stdlib.h>

typedef int TELEMENTO;

typedef struct {
    TELEMENTO *datos;   
    unsigned long int tam;   
}STVECTOR;   
typedef STVECTOR *vectorP;

void crear(vectorP *v1,unsigned long int tam1)
{

    
    unsigned long int i=0;
    *v1=(vectorP)malloc(sizeof(STVECTOR));
    (*v1)->datos=(TELEMENTO*)malloc(tam1*sizeof(TELEMENTO));
    (*v1)->tam=tam1;
for(i=0; i < tam1; i++){
    *((*v1)->datos+i) = 0;
}
}

void asignar(vectorP *v1, unsigned long int posicion, TELEMENTO valor)
{
    *((*v1)->datos+posicion)=valor;
}

void liberar(vectorP *v1){
    
    free(*v1);
    
}

TELEMENTO recuperar(vectorP v1, unsigned long int posicion){
    
    if (posicion >= 0 && posicion < v1->tam)
    {
        return v1->datos[posicion];
    }
    return 0;
    
}

unsigned long int tamanho(vectorP v1){
    
    return v1->tam;
}
