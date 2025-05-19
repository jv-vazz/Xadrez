#include <stdio.h>

// ------------------ TORRE ------------------
// Função recursiva para simular o movimento da Torre
void moverTorre(int casasRestantes) {
    if (casasRestantes <= 0) return;

    printf("Direita\n");
    moverTorre(casasRestantes - 1);
}

// ------------------ BISPO ------------------
// Função recursiva para simular movimento diagonal do Bispo
void moverBispoRecursivo(int casasRestantes) {
    if (casasRestantes <= 0) return;

    printf("Cima Direita\n");
    moverBispoRecursivo(casasRestantes - 1);
}

// Função com loops aninhados (externo: vertical / interno: horizontal)
void moverBispoComLoops(int casas) {
    for (int i = 0; i < casas; i++) {
        for (int j = 0; j < 1; j++) {  // só 1 movimento horizontal por vez
            printf("Cima Direita\n");
        }
    }
}

// ------------------ RAINHA ------------------
// Função recursiva para simular movimento da Rainha para a esquerda
void moverRainha(int casasRestantes) {
    if (casasRestantes <= 0) return;

    printf("Esquerda\n");
    moverRainha(casasRestantes - 1);
}

// ------------------ CAVALO ------------------
// Loops complexos com múltiplas variáveis e condições
void moverCavalo() {
    int movimentosVerticais = 2;
    int movimentosHorizontais = 1;

    printf("Movimento do Cavalo (2 casas para cima e 1 para a direita):\n");

    for (int i = 0, passo = 0; i < movimentosVerticais + movimentosHorizontais; i++) {
        if (passo < movimentosVerticais) {
            printf("Cima\n");
            passo++;
            continue;
        }

        for (int j = 0; j < movimentosHorizontais; j++) {
            printf("Direita\n");
            break;  // só uma vez
        }

        break; // encerra o movimento do cavalo
    }
}

int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // ------------------ TORRE ------------------
    printf("Movimento da Torre (5 casas para a direita):\n");
    moverTorre(casasTorre);

    printf("\n");

    // ------------------ BISPO ------------------
    printf("Movimento do Bispo com Recursividade (5 casas na diagonal Cima Direita):\n");
    moverBispoRecursivo(casasBispo);

    printf("\n");

    printf("Movimento do Bispo com Loops Aninhados (5 casas na diagonal Cima Direita):\n");
    moverBispoComLoops(casasBispo);

    printf("\n");

    // ------------------ RAINHA ------------------
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    moverRainha(casasRainha);

    printf("\n");

    // ------------------ CAVALO ------------------
    moverCavalo();

    return 0;
}