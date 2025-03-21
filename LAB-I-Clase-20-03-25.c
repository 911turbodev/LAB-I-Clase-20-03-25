//Laboratorio I --Clase 20-03-25
//Alumno: Kenzo Kairiyama 
#include <stdio.h>
int main()
{
    //Crear un programa en C, que ordene 3 números ingresados por el usuario, de menor a mayor.

    //Pedir los numeros al usuario
    int num1, num2, num3, aux;
    printf("Ingrese un numero por teclado.\n");
    scanf("%d", &num1);
    printf("Ingrese otro numero por teclado.\n");
    scanf("%d", &num2);
    printf("Ingrese otro numero por teclado.\n");
    scanf("%d", &num3);

    //ordenar de menor a mayor
    if (num1 > num2){
        aux = num1;
        num1 = num2;
        num2 = aux;
    }
    if (num1 > num3){
        aux = num1;
        num1 = num3;
        num3 = aux;
    }
    if (num2 > num3){
        aux = num2;
        num2 = num3;
        num3 = aux;
    }
    
    //imprimir el resultado
    printf("El orden de menor a mayor es: %d %d %d\n", num1, num2, num3);
    
    return 0;
}
