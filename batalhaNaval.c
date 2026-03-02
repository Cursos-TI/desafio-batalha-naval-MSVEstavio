#include <stdio.h>

// Desafio Batalha Naval - MateCheck

int main() {

    // ================================
    // Nível Novato - Posicionamento dos Navios
    // ================================

    printf("\n=== NIVEL NOVATO ===\n");

    int tabuleiro5[5][5] = {0};

    // Navio vertical (coluna 1)
    for (int i = 0; i < 3; i++) {
        tabuleiro5[i][1] = 3;
        printf("Navio Vertical: (%d, %d)\n", i, 1);
    }

    // Navio horizontal (linha 3)
    for (int j = 0; j < 3; j++) {
        tabuleiro5[3][j] = 3;
        printf("Navio Horizontal: (%d, %d)\n", 3, j);
    }


    // ================================
    // Nível Aventureiro - Tabuleiro 10x10
    // ================================

    printf("\n=== NIVEL AVENTUREIRO ===\n");

    int tabuleiro[10][10] = {0};

    // Navio horizontal
    for (int j = 0; j < 4; j++) {
        tabuleiro[2][j] = 3;
    }

    // Navio vertical
    for (int i = 0; i < 4; i++) {
        tabuleiro[i][5] = 3;
    }

    // Navio diagonal principal
    for (int i = 0; i < 4; i++) {
        tabuleiro[i][i] = 3;
    }

    // Navio diagonal secundária
    for (int i = 0; i < 4; i++) {
        tabuleiro[i][9 - i] = 3;
    }

    // Exibir tabuleiro completo
    printf("\nTabuleiro 10x10:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }


    // ================================
    // Nível Mestre - Habilidades Especiais
    // ================================

    printf("\n=== NIVEL MESTRE ===\n");

    int cone[3][5] = {0};
    int cruz[3][5] = {0};
    int octaedro[3][5] = {0};

    // Cone
    for (int i = 0; i < 3; i++) {
        for (int j = 2 - i; j <= 2 + i; j++) {
            cone[i][j] = 1;
        }
    }

    // Cruz
    for (int i = 0; i < 3; i++) {
        cruz[i][2] = 1;
    }
    for (int j = 0; j < 5; j++) {
        cruz[1][j] = 1;
    }

    // Octaedro (losango simples)
    octaedro[0][2] = 1;
    octaedro[1][1] = 1;
    octaedro[1][2] = 1;
    octaedro[1][3] = 1;
    octaedro[2][2] = 1;

    // Exibir Cone
    printf("\nHabilidade CONE:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", cone[i][j]);
        }
        printf("\n");
    }

    // Exibir Cruz
    printf("\nHabilidade CRUZ:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", cruz[i][j]);
        }
        printf("\n");
    }

    // Exibir Octaedro
    printf("\nHabilidade OCTAEDRO:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", octaedro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
