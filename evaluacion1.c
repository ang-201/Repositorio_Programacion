/*
@Date <22/02/2023>
@Author <Angel Reyes>
@Version <1.1>
*/

/*
Programa que ayuda al usuario a corroborar si su match o emparejamiento es compatible con el,
mediante una serie de 10 preguntas, las cuales debera responder digitando los valores de 10 0 5,
donde 10 = Si, y 5= No, al final se suman los puntos obtenidos por cada pregunta y se divide entre los
puntos maximos que se pueden obtener, esta operacion dara como resultado un porcentaje el cual si es mayor
a 70  le recomendariamos  que siga conociendo a su match, en cambio si es menor o igual a 70 le sugeririamos conocer a otras personas.*/

#include<stdio.h>
#define PMaximos 100 //Constante que almacena el total de puntos posibles

int  nivel_sintonia(){
    /*
    @name <nivel sintonia>
    @param <void>
    @return <int>
    */
    
    int preguntas[10]; 
    int suma=0;
    int resultado;
    printf("\nBienvenido, se le realizaran 10 preguntas las cuales debera responder digitando los valores de 10 o 5,\n");
    printf("donde  10 = Si y 5= No, dichas preguntas lo ayudaran a corroborar si su match es realmente compatible con usted\n");
    printf("\nPregunta 1: ¿Comparten al menos dos hobbys en comun?\n");scanf("%i",&preguntas[0]);
    printf("\nPregunta 2: ¿La persona con la que hizo match, busca el mismo tipo de relacion?\n");scanf("%i",&preguntas[1]);
    printf("\nPregunta 3: ¿Tienen en comun al menos 3 aspectos en sus personalidades?\n");scanf("%i",&preguntas[2]);
    printf("\nPregunta 4: ¿Disfrutarian el viajar juntos?\n");scanf("%i",&preguntas[3]);
    printf("\nPregunta 5: ¿Disfrutan cocinar ambos?\n");scanf("%i",&preguntas[4]);
    printf("\nPregunta 6: ¿Les gustan los deportes?\n");scanf("%i",&preguntas[5]);
    printf("\nPregunta 7: ¿Tienen mascotas tanto tu match como tu?\n");scanf("%i",&preguntas[6]);
    printf("\nPregunta 8: ¿Gustan de los paseos al aire libre?\n");scanf("%i",&preguntas[7]);
    printf("\nPregunta 9: ¿Actualmente se encuentran estudiando?\n");scanf("%i",&preguntas[8]);
    printf("\nPregunta 10:¿Cumple su match con las expectativas de lo que desea en una relación?\n");scanf("%i",&preguntas[9]);

    for(int i=0; i<10; i++){
        suma += preguntas[i];//contador
    }
   
    resultado = suma / PMaximos * 100;
   
    if (suma > 70){
    printf("\nEl total de puntos obtenidos es %i, por lo que le recomendamos que siga conociendo a su match.\n",suma); 
    }
    else {
        printf("\nEl total de puntos obtenidos es menor a 70 por lo que le sugerimos conocer a otras personas.\n");
    }
    return resultado;
}

int main(){
    nivel_sintonia();
    return 0;
}