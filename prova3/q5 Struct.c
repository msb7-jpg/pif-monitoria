#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição da struct conforme o enunciado
typedef struct {
    char *nome;
    int vida;
    int ataque;
    int defesa;
    int quantidade_itens;
    char **itens;
    int *quantidades_itens;
} Personagem;

Personagem* substituir_personagem(
    Personagem *entrada, 
    Personagem *saida, 
    int tamanho, 
    int posicao, 
    char *novo_nome, 
    int nova_vida, 
    int novo_ataque, 
    int nova_defesa, 
    char **novos_itens, 
    int *novas_quantidades, 
    int nova_qtd_itens
) {
    for (int i = 0; i < tamanho; i++) {
        // Declaração de variáveis auxiliares para decidir qual dado usar
        char *nome_ref;
        int v, a, d, qtd;
        char **itens_ref;
        int *q_itens_ref;

        if (i == posicao) {
            // Usa os dados do novo personagem
            nome_ref = novo_nome;
            v = nova_vida;
            a = novo_ataque;
            d = nova_defesa;
            qtd = nova_qtd_itens;
            itens_ref = novos_itens;
            q_itens_ref = novas_quantidades;
        } else {
            // Usa os dados do personagem vindo da entrada
            nome_ref = entrada[i].nome;
            v = entrada[i].vida;
            a = entrada[i].ataque;
            d = entrada[i].defesa;
            qtd = entrada[i].quantidade_itens;
            itens_ref = entrada[i].itens;
            q_itens_ref = entrada[i].quantidades_itens;
        }

        // 1. Copia valores diretos
        saida[i].vida = v;
        saida[i].ataque = a;
        saida[i].defesa = d;
        saida[i].quantidade_itens = qtd;

        // 2. Alocação dinâmica do nome (Cópia Profunda com calloc)
        saida[i].nome = (char *)calloc(strlen(nome_ref) + 1, sizeof(char));
        strcpy(saida[i].nome, nome_ref);

        // 3. Gerenciamento de itens
        if (qtd > 0) {
            // Inicializa com calloc para 1 posição
            saida[i].itens = (char **)calloc(1, sizeof(char *));
            saida[i].quantidades_itens = (int *)calloc(1, sizeof(int));

            for (int j = 0; j < qtd; j++) {
                // Se não for o primeiro item, aumenta o vetor com realloc 
                if (j > 0) {
                    saida[i].itens = (char **)realloc(saida[i].itens, (j + 1) * sizeof(char *));
                    saida[i].quantidades_itens = (int *)realloc(saida[i].quantidades_itens, (j + 1) * sizeof(int));
                }
                
                // Aloca e copia cada string de item
                saida[i].itens[j] = (char *)calloc(strlen(itens_ref[j]) + 1, sizeof(char));
                strcpy(saida[i].itens[j], itens_ref[j]);
                
                // Copia a quantidade do item
                saida[i].quantidades_itens[j] = q_itens_ref[j];
            }
        } else {
            // Caso não tenha itens 
            saida[i].itens = NULL;
            saida[i].quantidades_itens = NULL;
        }
    }

    // Retorna o endereço da posição substituída no vetor de saída
    return &saida[posicao];
}