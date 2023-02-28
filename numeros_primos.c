//Programa que imprime en pantalla la serie de numeros primos del 1 a 50
#include<stdio.h>

void num_primo (){
    int i,es_primo,j;
    
    for(int i=2; i <=50; i ++){
        es_primo=1;
        
        for(j=2;j<i;j++){ 
           if (i%j==0){
                es_primo=0;
            }
        }
        if (es_primo==1){
            
            printf("%i\n",i);
        } 
}

}
 int main(){
    num_primo();
 }