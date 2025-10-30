#include <stdio.h>

// ----------------------------------------------------------
// Funções recursivas: Torre, Bispo e Rainha
// ----------------------------------------------------------

// --- TORRE ---
// Move-se em linha reta. Movimento recursivo: 5 casas à direita.
void moverTorre(int passo, int total) {
    if (passo > total) return; // Condição de parada
    printf("Direita (%d)\n", passo);
    moverTorre(passo + 1, total); // Chamada recursiva para próxima casa
}

// --- BISPO ---
// Move-se na diagonal. Movimento recursivo + loops aninhados.
// 5 casas para cima e à direita.
void moverBispo(int passo, int total) {
    if (passo > total) return; // Condição de parada
    // Loop aninhado: primeiro vertical, depois horizontal.
    for (int i = 1; i <= 1; i++) { // movimento vertical
        for (int j = 1; j <= 1; j++) { // movimento horizontal
            printf("Cima, Direita (%d)\n", passo);
        }
    }
    moverBispo(passo + 1, total); // Chamada recursiva
}

// --- RAINHA ---
// Move-se em todas as direções. Movimento recursivo: 8 casas à esquerda.
void moverRainha(int passo, int total) {
    if (passo > total) return;
    printf("Esquerda (%d)\n", passo);
    moverRainha(passo + 1, total);
}

// ----------------------------------------------------------
// Cavalo — loops complexos com múltiplas variáveis e controle de fluxo
// ----------------------------------------------------------
// O Cavalo move-se em "L": duas casas para cima e uma para a direita.
void moverCavalo() {
    int movVertical = 2;
    int movHorizontal = 1;

    printf("Movimento do Cavalo:\n");
    // Loop externo controla o movimento vertical
    for (int i = 1, j = 0; i <= movVertical; i++, j++) {
        if (i == 1 && j == 0) {
            printf("Cima (%d)\n", i);
            continue; // Pula para o próximo movimento vertical
        }

        if (i == 2) {
            printf("Cima (%d)\n", i);
            // Loop interno: move uma casa à direita depois de subir 2
            for (int k = 1; k <= movHorizontal; k++) {
                if (k == 1) {
                    printf("Direita (%d)\n", k);
                    break; // Sai do loop interno após a casa lateral
                }
            }
        }
    }
}

// ----------------------------------------------------------
// Função principal
// ----------------------------------------------------------
int main() {
    // --- TORRE ---
    printf("Movimento da Torre:\n");
    moverTorre(1, 5);

    // --- BISPO ---
    printf("\nMovimento do Bispo:\n");
    moverBispo(1, 5);

    // --- RAINHA ---
    printf("\nMovimento da Rainha:\n");
    moverRainha(1, 8);

    // --- CAVALO ---
    printf("\n");
    moverCavalo();

    return 0;
}
