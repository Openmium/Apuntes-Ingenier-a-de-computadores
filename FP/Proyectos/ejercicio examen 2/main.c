#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Escribir un programa que lea de teclado n�meros enteros (al menos uno)
que ir� sumando en una variable (inicializada a 0). Por cada n�mero le�do imprimir� ese valor y
la suma acumulada hasta ese momento. EL programa acabar� cuando la suma de todos los n�meros le�dos sean 0.
*/

    int suma=0, num;

    do{
        printf("num?");
        scanf("%i", &num);
    suma+=num;
    printf(" > %i %i \n", num, suma);

    }while( suma!=0);

    return 0;
}
