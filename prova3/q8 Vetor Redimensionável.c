#include <stdio.h>

// 8. Vetor Redimensionável

// Escreva uma função que receba um ponteiro para um vetor de inteiros alocado dinamicamente e seu tamanho
// atual. A função deve ler novos números do usuário até que ele digite 0. Se o vetor ficar cheio, use realloc para
// dobrar o tamanho dele. Não esqueça de tratar o caso de falha no realloc.

// realloc(vetor, novo tamanho) # geralmente -> [sizeof * num elementos]

void ler_vetor(int **vetor, int *tam) {
    int num, count = 0;

    while (scanf("%d", &num) && num != 0) {
        if (count == *tam) {
            *tam *= 2;
            int *temp = (int *)realloc(*vetor, (*tam) * sizeof(int));
            *vetor = temp;
        }
        (*vetor)[count++] = num;
    }
}