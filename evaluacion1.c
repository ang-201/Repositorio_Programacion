/*
Date:22/02/2023
Author: Angel Reyes



*/

#include<stdio.h>
#define PMaximos 100

int  nivel_sintonia(){
    
    int preguntas[10]; 
    int suma=0;
    int resultado;
    printf("\nPregunta 1: ¿Comparten al menos dos hobbys en común'\n");scanf("%i",&preguntas[0]);
    printf("\nPregunta 2: ¿La persona con la que hizo match, busca el mismo tipo de relación?\n");scanf("%i",&preguntas[1]);
    printf("\nPregunta 3: ¿Tienen en común al menos 3 aspectos en sus personalidades?\n");scanf("%i",&preguntas[2]);
    printf("\nPregunta 4: ¿Le molestaria a su match si viajara  constantemente si asi lo requiriera su trabajo?\n");scanf("%i",&preguntas[3]);
    printf("\nPregunta 5: ¿Disfrutan cocinar ambos?\n");scanf("%i",&preguntas[4]);
    printf("\nPregunta 6: ¿Les gustan los deportes a ambos?\n");scanf("%i",&preguntas[5]);
    printf("\nPregunta 7: ¿Tienen mascotas tanto tu match como tu?\n");scanf("%i",&preguntas[6]);
    printf("\nPregunta 8 : ¿Gustan de los paseos al aire libre?\n");scanf("%i",&preguntas[7]);
    printf("\nPregunta 9: ¿Le incomodaria que su emparejamiento tuviese hijos?\n");scanf("%i",&preguntas[8]);
    printf("\nPregunta 10: ¿Actualmente estudian?\n");scanf("%i",&preguntas[9]);

   for(int i=0;i<10; i++){
        suma+=preguntas[i];//contador
    }
   
   resultado = suma/ PMaximos * 100;
   
   if (suma > 70){
    printf("El total de puntos obtenidos es %i, por lo que le recomendamos que siga conociendo a su match",suma); 
   }
   else {
    printf("El total de puntos obtenidos es menor a 70 por lo que le sugerimos conocer a otras personas");
   }
    return resultado;
}

int main(){
    nivel_sintonia();
    return 0;
}