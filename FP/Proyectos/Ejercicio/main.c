   /*Escribir un programa en C que lea
caracteres por teclado, si se lee una letra
may�scula imprima la correspondiente
min�scula y viceversa, si lee un d�gito
imprima el valor resultante de sumarle
80. Cualquier otro car�cter no se
imprimir�.
El programa termina cuando se lea un �*�
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    do {
        printf("Que quiere\n");
        scanf("%i", &a);
    } while (a == 0);

    return 0;
}
