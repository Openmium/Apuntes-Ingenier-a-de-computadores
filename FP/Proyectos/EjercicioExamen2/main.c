#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 4

void cal_digito(unsigned int matriz[N][N]);

int main() {
    unsigned int matriz[N][N];
    srand(time(NULL));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matriz[i][j] = rand() % 10; // Rellena la matriz con d�gitos aleatorios del 0 al 9
        }
    }

    cal_digito(matriz);

    return 0;
}

void cal_digito(unsigned int matriz[N][N]) {
    unsigned int digitos[10] = {0}; // Inicializa la matriz de conteo de d�gitos a cero

    for (int f = 0; f < N; f++) {
        for (int c = 0; c < N; c++) {
            digitos[matriz[f][c]]++; // Incrementa el contador para el d�gito actual
        }
    }

    // Imprime la frecuencia de aparici�n de cada d�gito
    for (int i = 0; i < 10; i++) {
        printf("El d�gito %d aparece %d veces\n", i, digitos[i]);
    }
}
