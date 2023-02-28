//Tablas de multiplicar del 1 a 10
#include<stdio.h>
void tablas_multiplicar(void){
    unsigned int i,j;
    for(i=1; i<=10; i++){
        for(j=1; j<=10; j++){
            unsigned int producto= i * j;
            printf("\n%i x %i = %i\n",i,j, producto);
        }
    }
}



int main(){

    tablas_multiplicar();
}

