#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Escribir un programa que lea de teclado n�meros enteros (al menos uno) que ir� sumando en una variable (inicializada a 0).
    Por cada n�mero le�do imprimir� ese valor y la suma acumulada hasta ese momento.
    El programa acabar� cuando la suma de todos los n�meros le�dos sean 0.
    */
    int suma = 0, num;

    do{
        printf("\nIntroduzca numero a sumar: ");
        scanf("%d", &num);
        if(num < 10 && num >-10){
        suma = num + suma;
        printf("\nSu numero %d y el resultado de la suma %d.", num, suma);
        }

    }while(suma != 0);


    return 0;
}
