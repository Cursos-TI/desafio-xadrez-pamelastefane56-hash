#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
// Declaração de variáveis
int casas_torre = 5;
int casas_bispo = 5;
int casas_rainha = 8;
int contador;

// --- MOVIMENTO DA TORRE (Direita) ---
// Utilizando a estrutura 'for' para movimento linear
printf("--- Movimento da Torre ---\n");
for (contador = 1; contador <= casas_torre; contador++) {
printf("Direita\n");
}

// --- MOVIMENTO DO BISPO (Cima e Direita) ---
// Utilizando a estrutura 'while' para movimento diagonal
printf("\n--- Movimento do Bispo ---\n");
contador = 1;
while (contador <= casas_bispo) {
printf("Cima, Direita\n");
contador++;
}

// --- MOVIMENTO DA RAINHA (Esquerda) ---
// Utilizando a estrutura 'do-while' para movimento horizontal
printf("\n--- Movimento da Rainha ---\n");
contador = 1;
do {
printf("Esquerda\n");
contador++;
} while (contador <= casas_rainha);

    return 0;
}
