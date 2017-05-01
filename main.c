#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "entero.h"
#include "vector.h"


int main(int argc, char** argv) {
    entero v1=NULL;
    entero v2=NULL;
    entero result=NULL;
    int flag1, flag2=0;
    int i, j=0;
    unsigned long int numcif;

    if(argc>1){

        numcif=strlen(argv[1]);

        if(argv[1][0]=='-'){
            numcif-1;
            flag1=1;
        }

        if(argv[2][0]=='-'){
            flag2=1;
        }
        
        creaEnteroLargo(&v1, numcif, flag1);
        creaEnteroLargo(&v2, numcif, flag2);

        if((flag1==1 && flag2==0) || (flag2==1 && flag1==0)){
             creaEnteroLargo(&result, numcif*2, 1);
        }
        else{
            creaEnteroLargo(&result, numcif*2, 0);
        }

        //asignar valores
      for(int i=0; argv[1][i] !="/0" ;i++){
            
            if(flag1==1){
                i++;
            }

            int cifra = (int)argv[1][i]-'0';
            asignarEntero(&v1, i, cifra);

        }
        
        for(int i=0; argv[2][i] !="/0";i++){
            if(flag2==1){
                i++;
            }
            int cifra = (int)argv[2][i]-'0';
            asignarEntero(&v1, i, cifra);

        }

    }

    return (EXIT_SUCCESS);
}
