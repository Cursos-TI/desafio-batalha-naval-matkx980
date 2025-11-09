#include <stdio.h>

int main() {
    // ==============================
    // PARTE 1: DECLARAÇÃO DE VARIÁVEIS
    // ==============================

    int tabuleiro[10][10];  // Matriz 10x10 representando o mar (0 = água, 3 = navio)
    int i, j;               // Variáveis para loops
    int tamanhoNavio = 3;   // Tamanho fixo dos navios

    // Coordenadas iniciais dos navios (definidas no código)
    int linhaVertical = 1;  // Linha inicial do navio vertical
    int colunaVertical = 4; // Coluna fixa do navio vertical

    int linhaHorizontal = 6; // Linha fixa do navio horizontal
    int colunaHorizontal = 2; // Coluna inicial do navio horizontal

    // ==============================
    // PARTE 2: INICIALIZAÇÃO DO TABULEIRO
    // ==============================
    // Preenche todo o tabuleiro com 0 (representando água)
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // ==============================
    // PARTE 3: POSICIONAMENTO DOS NAVIOS
    // ==============================

    // Posiciona o navio vertical (3 posições para baixo)
    for (i = 0; i < tamanhoNavio; i++) {
        tabuleiro[linhaVertical + i][colunaVertical] = 3;
    }

    // Posiciona o navio horizontal (3 posições para o lado)
    for (j = 0; j < tamanhoNavio; j++) {
        tabuleiro[linhaHorizontal][colunaHorizontal + j] = 3;
    }

    // ==============================
    // PARTE 4: EXIBIÇÃO DO TABULEIRO
    // ==============================
    printf("\n=== TABULEIRO BATALHA NAVAL ===\n\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]); // Exibe cada posição separada por espaço
        }
        printf("\n"); // Pula linha ao final de cada linha do tabuleiro
    }

    // ==============================
    // PARTE 5: DESCRIÇÃO FINAL
    // ==============================
    printf("\nLegenda:\n");
    printf("0 = Água\n");
    printf("3 = Navio\n");

    return 0;
}
