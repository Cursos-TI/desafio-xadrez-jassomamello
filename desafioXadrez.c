#include <stdio.h>

int main() {
    // ### Movimento da Torre ###
    // A Torre se move em linha reta. Aqui ela anda 5 casas para a direita.
    int casas_torre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casas_torre; i++) {
        printf("Direita (%d)\n", i);
    }

    // ### Movimento do Bispo ###
    // O Bispo se move em diagonal. Aqui ele anda 5 casas para cima e à direita.
    int casas_bispo = 5;
    int contador = 1;
    printf("\nMovimento do Bispo:\n");
    while (contador <= casas_bispo) {
        printf("Cima, Direita (%d)\n", contador);
        contador++;
    }

    // ### Movimento da Rainha ###
    // A Rainha se move em qualquer direção. Aqui ela anda 8 casas para a esquerda.
    int casas_rainha = 8;
    int contador_rainha = 1;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda (%d)\n", contador_rainha);
        contador_rainha++;
    } while (contador_rainha <= casas_rainha);

    return 0;
}