''' Laboratorio4
Author: Angel Reyes
date: 9-03-2023
Description: Laboratorio para repasar condiciones, funciones e investigar "while" en C
'''

#---------------------INSTRUCCIONES-----------------------
#Cree una funcion "suma" que imprima la suma de dos valores solo si son pares, de lo contrario imprimirá que no son pares
#Cree una funcion "resta" que imprima la resta de dos valores solo si son múltiplos de 5, de lo contrario imprimirá que no son impares
#Cree una funcion "division" que imprima la división de dos valores solo si el resultado no tiene reciduo, de lo contrario imprimirá que no es una división exacta
#Cree una funcion "multiplicacion" que imprima la multiplicación de dos valores solo si son mayores a 10, de lo contrario imprimirá que no son mayores a 10

#import os biblioteca que contiene funcionalidades para interactuar con el OS



def suma ():
    ''' 
    Name: Imprime la suma de dos numeros dados solo si son pares, de lo contrario imprimira en pantalla que no son pares"
    Author: Angel Reyes
    Date: 10,03,2023
    Description: 
    Param:
    '''
    num1=int(input("\nDigite un valor:"))
    num2=int(input("\nDigite  otro valor:"))

    if num1%2==0 and num2%2==0:
        adicion=num1 + num2
        print(f"\nLa suma de {num1} + {num2} 1es: {adicion}\n")

    else:
        print("\nLos valores dados no son pares\n")
    
def resta():
    ''' 
    Name: Resta 
    Author: Angel Reyes
    Date: 10,03,2023
    Description:Imprime la resta  de dos numeros dados solo si son multiplos de 5, de lo contrario imprimira en pantalla que no son impares"
    Param:
    '''
    num1=int(input("\nDigite un valor:"))
    num2=int(input("\nDigite  otro valor:"))


    if num1%5==0 and num2%5==0:
        diferencia= int (num1 - num2)
        print("\nLa diferencia de {} - {} es: {}\n".format(num1,num2,diferencia))

    else:
        print("\nLos valores dados no son impares\n")

def division():
    ''' 
    Name: division
    Author: Angel Reyes
    Date: 10,03,2023
    Description:Imprime la division  de dos numeros dados solo si su division no tiene residuo, de lo contrario imprimira en pantalla que no es una division exacta"
    Param:
    '''   
    num1=int(input("\nDigite un valor:"))
    num2=int(input("\nDigite  otro valor:"))

    if num1%num2==0:
        cociente= num1 / num2
        print(f"\nLa division de  {num1} /  {num2}  es: {cociente}\n")

    else:
        print("\nLa division no es exacta\n")

def multiplicacion():
    ''' 
    Name: multiplicacion
    Author: Angel Reyes
    Date: 10,03,2023
    Description:Imprime la multiplicacion  de dos numeros dados solo si son mayores a 10, de lo contrario imprimira en pantalla que los valores dados no son mayores a 10"
    Param:
    '''
    num1=int(input("\nDigite un valor:"))
    num2=int(input("\nDigite  otro valor:"))
        
    if num1 > 10 and num2 > 10:
        producto= num1 * num2
        print(f"\nLa multiplicacion de  {num1} *  {num2}  es: {producto}\n")
        
    else:
        print("\nAmbos valores dados deben ser pares\n")

print("Bienvenido al menú seleccione una opción \n")
print("\n1)Suma\n")
print("\n2)Resta\n")
print("\n3)Division\n")
print("\n4)Multiplicacion\n")

opcion=int(input(":")) #Entrada que se le solicita al usuario
#simulacion de un switch case
if opcion==1:
     suma()

elif opcion==2:
     resta()

elif opcion==3:
     division()

else:
     multiplicacion()
     
#---------------------INSTRUCCIONES-----------------------
'''
explique: 
    1. ¿Qué es lo que hace el código en un comentario antes de modificarlo?
        Simula un menu basico en el cual el usuario elegira una opcion y se ejecutara un codigo determinado

    2. ¿Cuál es la sintaxis de un while?
            while condicion:
                codigo
    
    3. ¿Exite switch en python?
        No, pero se puede simular mediante el uso de otras condicionales como if, elif, else
      
    4. ¿Qué es un elif?
        Es la sentencia condicional  else if,solo que en python se emplea la palabra reservad "elif"
    
    5. ¿Qué función de se ejecuta al correr el script?
        main()
    
Modifique el siguien código para que mande a llamar la función suma, resta, multiplicación y división y agregue un mecanismo para preguntar si se deasea volver al menú principal.
Guarde y suba su código a un repositorio.
'''