#include <stdio.h>

// Definição da estrutura
typedef struct {
    char nome[50];
    int idade;
} Pessoa;


int main() {
    Pessoa p1;
    char nome_entrada[] = "Carlos Silva";
    int i;

    for (i = 0; nome_entrada[i] != '\0'; i++) {
        p1.nome[i] = nome_entrada[i];
    }
    p1.nome[i] = '\0';

    p1.idade = 25;

    // Impressão
    printf("Dados da Pessoa:\n");
    printf("Nome: %s\n", p1.nome);
    printf("Idade: %d anos\n", p1.idade);

    return 0;
}