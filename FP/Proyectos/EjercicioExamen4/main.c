#include <stdio.h>

#define N 10

int main() {
    int matriz[N];

    // Inicializa el array con un valor no ingresado por el usuario
    for (int i = 0; i < N; i++) {
        matriz[i] = -1;
    }

    int num;
    int indexNegativos = 0;
    int indexPositivos = N - 1;

    printf("Ingrese una secuencia de n�meros (finalice con 0):\n");

    // Leer los n�meros hasta que el array est� lleno o se introduzca un 0
    while (indexNegativos < indexPositivos) {
        scanf("%d", &num);

        if (num < 0) {
            // Almacena los n�meros negativos en las primeras posiciones
            matriz[indexNegativos++] = num;
        } else if (num > 0) {
            // Almacena los n�meros positivos en las �ltimas posiciones
            matriz[indexPositivos--] = num;
        }
        // No hacer nada con el 0 seg�n el enunciado
    }

    // Imprime el array con guiones (-) y signos m�s (+)
    for (int i = 0; i < N; i++) {
        if (matriz[i] < 0) {
            printf(" -,");
        } else if (matriz[i] > 0) {
            printf(" +,");
        }
        // Omitir los 0 (valor inicial) y cualquier otro n�mero introducido
    }

    return 0;
}
