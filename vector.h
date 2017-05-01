typedef int TELEMENTO;

typedef void * vectorP; 

void crear(vectorP *v1,unsigned long int tam1);

void asignar(vectorP *v1,unsigned long int posicion, TELEMENTO valor);

void liberar(vectorP *v1);

TELEMENTO recuperar(vectorP v1, unsigned long int posicion);

unsigned long int tamanho(vectorP v1);
