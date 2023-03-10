/* Laboratorio4
Author: Angel Reyes 
date: 9-03-2023
Description: Laboratorio para repasar condiciones, funciones e investigar "while" en C
*/

//---------------------INSTRUCCIONES-----------------------
//Cree una funcion "suma" que imprima la suma de dos valores solo si son pares, de lo contrario imprimirá que no son pares
//Cree una funcion "resta" que imprima la resta de dos valores solo si son múltiplos de 5, de lo contrario imprimirá que no son impares
//Cree una funcion "division" que imprima la división de dos valores solo si el resultado no tiene residuo, de lo contrario imprimirá que no es una división exacta
//Cree una funcion "multiplicacion" que imprima la multiplicación de dos valores solo si son mayores a 10, de lo contrario imprimirá que no son mayores a 10

#include <stdio.h>  
#include <stdlib.h>
#include <stdbool.h>
int adicion,diferencia,producto,cociente,num1,num2;
char opcion,opcion_m; //variables globales

void suma(){
    /* suma
    Author:   
    Date: 09,03,2023
    Description: Evalua dos parametros dados, los cuales si son pares se sumaran de lo contrario se imprimira en pantalla que no son pares
    Param:  
    */
    printf("\nDigite un valor:\n");scanf("%i",&num1);
    printf("\nDigite otro valor:\n");scanf("%i",&num2);
    
    if (num1%2==0 && num2%2==0){
        adicion = num1+num2;        
        printf("\n%i\n",adicion);
    }
    
    else{ 
        printf("\nNo son pares\n");
    }
     
}

void resta (){
    
    /* resta 
    Author:Angel Reyes 
    Date: 09,03,2023
    Description: Evalua dos parametros dados,si ambos son multiplos de 5 se imprimira su diferencia de lo contrario se imprimira en pantalla que no son multiplos de 5
    Param: 
    */
    printf("\nDigite un valor:\n");scanf("%i",&num1);
    printf("\nDigite otro valor:\n");scanf("%i",&num2);
    
    if (num1%5==0 && num2%5==0){
        diferencia= num1 - num2;
        printf("\n%i\n", diferencia);
    }

    else {
        printf("\nNo son multiplos de 5\n");
    }

   
}
void division(){
    /* division
    Author:Angel Reyes 
    Date: 09,03,2023
    Description: Evalua dos argumentos dados,si al momento de realizar la division con los argumentos dados el residuo es 0;  la division es exacta por lo que se imprimira el resultado, de lo contrario se imprimira en pantalla que la division no es exacta
    Param: 
    */
   printf("\nDigite un valor:\n");scanf("%i",&num1);
   printf("\nDigite otro valor:\n");scanf("%i",&num2);
   
   if(num1%num2==0){
        cociente= num1/num2;
        printf("\n%i\n",cociente);
   }
   
   else{
        printf("\nLa division no es exacta\n");
    }
    
}

void multiplicacion(){
    /* multiplicacion
    Author:Angel Reyes 
    Date: 09,03,2023
    Description: Evalua dos argumentos dados,si ambos son mayores a 10 se imprimira su multiplicacion de lo contrario se imprimira en pantalla que no son mayores a 10
    Param: 
    */
    printf("\nDigite un valor:\n");scanf("%i",&num1);
    printf("\nDigite otro valor:\n");scanf("%i",&num2);
    
    if (num1 >10 && num2 > 10){
        producto= num1 * num2;
        printf("\n%i\n",producto); 
    }

    else {  
        printf("\nAmbos valores deben ser  mayores a 10\n");
    }

    
}

   
 
int main(){
    bool control=true;
    do {   
        printf("\nBienvenido, favor de seleccionar la letra de la opcion deseada\n");
        printf("\nMenú:\n \na)Suma\n \nb)Resta\n \nc)Division\n\nd)Multiplicacion\n");
        printf("\nopcion:");scanf(" %c",&opcion);
        
        switch (opcion){
 
            case 'a':
            suma();
            break;

            case 'b':
            resta();
            break;

            case 'c':
            division();
            break;

            case 'd':
            multiplicacion();
            break;

            default:
            printf("opcion no valida");
            break;    
        }
        
        printf("\n¿Desea volver al menú principal?, digitar 'Y' por favor, si desea cerrar el programa digitar 'N'\n ");
        printf("\nopcion:\n");scanf(" %c",&opcion_m);
        if (opcion_m == 'N'){
            control=false;
            printf("\nSe ha cerrado el programa\n");
        }
       
        else{
            control=true;
        }
        
    } while(control ==true);
    
    return 0;
}


/*---------------------INSTRUCCIONES-----------------------
explique: 
      1. ¿Qué es lo que hace el código en un comentario antes de modificarlo?
      Basicamente simula un menu, el cual emplea una sentencia switch donde se almacena codigo que se ejecutara
      de acuerdo a la opcion digitada por el usuario. 
      
      2. ¿Para qué sirve la función fflush?
        Limpia el buffer
      
      3. ¿Cuál es la sintaxis de un while?
        while (condicion){
            bloque de código
        }
      4. ¿Cuál es la sintaxis de un switch?
        
        switch (variable a evaluar (de tipo int o char)){
            case identificador_caso :
            código
            break;
        
            default:
            código
        }

    
    Modifique el siguiente código para que mande a llamar a la función suma, resta, multiplicación y división y agregue un mecanismo para preguntar si se desea volver al menú principal.
    Guarde y suba su código a un repositorio.
*/
