// Implementar criar_matriz_invertida, que aloca uma nova matriz e preenche-a com os elementos da matriz original na ordem inversa.

// QUESTOES DE REVISAO

int** criar_matriz_invertida(int **entrada, int linhas, int colunas) {
    int **saida = (int **)malloc(linhas * sizeof(int *));
    int total = linhas * colunas;
    int count = 0;

    for (int i = 0; i < linhas; i++){
        saida[i] = (int *)malloc(colunas * sizeof(int));
    };

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            int pos_inv = total - 1 - count;
            saida[i][j] = entrada[pos_inv / colunas][pos_inv % colunas];
            count++;
        }
    }
    return saida;
}

