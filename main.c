#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "entero.h"
#include "vector.h"

void multclas(entero v1, entero v2, entero *resultado){
    
    int i,j;
    unsigned long int tm = tamanhoEnt(v1);
    int k = 2*tm-1;

    for(i=tm-1; i>=0; i--){

       for(j=tm-1; j>=0; j--){
           
            asignarEntero(resultado, k, (recuperarEntero(resultado, k)+recuperarEntero(&v1, j)*recuperarEntero(&v2, i)));
	    
printf("%d\n",recuperarEntero(&v1, j));
printf("%d\n",recuperarEntero(&v2, j));
            k--;
       }

       k = 2*tm-1;
    }


    for(i=k; i>=0; i--){

        if(recuperarEntero(resultado,i)>=10){
            
                asignarEntero(resultado, i-1, (recuperarEntero(resultado, i-1)+(recuperarEntero(resultado, i)-recuperarEntero(resultado, i)%10)/10));
                asignarEntero(resultado,i, recuperarEntero(resultado, i)%10 );
                
        }
    
    }


//imprimir
    for(i=0; i<2*tm; i++){
        printf("%d", recuperarEntero(resultado, i));
    }

}

int main(int argc, char** argv) {

    entero v1=NULL;
    entero v2=NULL;
    entero result=NULL;
    int flag1, flag2=0;
    
    if(argc>1){
        
//comprobar signo
        int numcif=strlen(argv[1]);



        if(argv[1][0]=='-'){
            numcif-1;
            flag1=1;
        }

        if(argv[2][0]=='-'){
            flag2=1;
        }

        
        creaEnteroLargo(&v1, numcif, flag1);
        creaEnteroLargo(&v2, numcif, flag2);


        //comprobacion del signo del resultado
        if((flag1==1 && flag2==0) || (flag2==1 && flag1==0)){
             creaEnteroLargo(&result, numcif*2, 1);
        }
        else{
            creaEnteroLargo(&result, numcif*2, 0);
        }


        //asignar valores
	
      for(int i=0; argv[1][i] != '\0';i++){
            
            if(flag1==1){
                i++;
            }

            int cifra = (int)argv[1][i]-'0';
            asignarEntero(&v1, i, cifra);
            
        }

        
        for(int i=0; argv[1][i] != '\0';i++){
            if(flag2==1){
                i++;
            }
            int cifra = (int)argv[2][i]-'0';
            asignarEntero(&v1, i, cifra);

        }

       multclas(v1, v2, &result);
    }

    return (EXIT_SUCCESS);
}

