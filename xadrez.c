/*
Faculdade Estácio
Aluno: Davi José da Silva
Curso: Análise e Desenvolvimento de Sistemas
Período: Primeiro Período
Desafio - Nível Novato
*/

// Nível Novato - Movimentação das peças usando estruturas de repetição
// Peças: Bispo (5 casas na diagonal superior direita), Torre (5 casas para a direita), Rainha (8 casas para a esquerda)

#include <stdio.h>

#define BISPO_PASSOS 5
#define TORRE_PASSOS 5
#define RAINHA_PASSOS 8

int main() {
    int i;

    // Movimentação do Bispo: Diagonal superior direita (Cima + Direita)
    printf("Movimentação do Bispo:\n");
    for (i = 0; i < BISPO_PASSOS; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }
    printf("\n");

    // Movimentação da Torre: 5 casas para a Direita (usando while)
    printf("Movimentação da Torre:\n");
    i = 0;
    while (i < TORRE_PASSOS) {
        printf("Direita\n");
        i++;
    }
    printf("\n");

    // Movimentação da Rainha: 8 casas para a Esquerda (usando do...while)
    printf("Movimentação da Rainha:\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < RAINHA_PASSOS);

    return 0;
}
