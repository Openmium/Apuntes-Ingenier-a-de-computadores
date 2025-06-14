#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int cols = 0;
    printf("Ingrese el n�mero de columnas: ");
    scanf("%i", &cols);

    int *matrix;
    int (*ptr)[cols];

    matrix = (int *)malloc(cols * sizeof(int));

    ptr = (int (*)[cols])matrix;

    srand(time(NULL)); // Inicializar la semilla para generar n�meros aleatorios

    // Rellenar la "matriz" con n�meros aleatorios
    for (int j = 0; j < cols; j++) {
        (*ptr)[j] = rand() % 100; // Generar n�meros aleatorios entre 0 y 99
    }

    // Imprimir la "matriz"
    printf("La matriz generada es:\n");
    for (int j = 0; j < cols; j++) {
        printf("%d ", (*ptr)[j]);
    }
    printf("\n");

    free(matrix);

    return 0;
}
