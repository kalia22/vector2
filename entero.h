#include "vector.h"

typedef void *entero;

void creaEnteroLargo(entero *v1, unsigned long int tam1, int signo);

void asignarEntero(entero *v1,unsigned long int posicion, TELEMENTO valor);

void liberarEntero(entero *v1);

TELEMENTO recuperarEntero(entero v1, unsigned long int posicion);

unsigned long int tamanhoEnt(entero v1);
