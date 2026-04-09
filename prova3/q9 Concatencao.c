#include <stdio.h>
#include <stdlib.h>

int main() {
    char s1[100], s2[100];
    int tam1 = 0, tam2 = 0;
    int i, j;

    // 1. Leitura das strings
    printf("Digite a primeira string: ");
    scanf("%s", s1);
    printf("Digite a segunda string: ");
    scanf("%s", s2);

    // 2. Cálculo manual do tamanho de cada string (sem strlen)
    while (s1[tam1] != '\0') tam1++;
    while (s2[tam2] != '\0') tam2++;

    // 3. Alocação dinâmica com o tamanho exato (s1 + s2 + terminador '\0')
    char *res = (char *)malloc((tam1 + tam2 + 1) * sizeof(char));
    
    if (res == NULL) {
        return 1; // Falha na alocação
    }

    // 4. Cópia manual dos caracteres da primeira string
    for (i = 0; i < tam1; i++) {
        res[i] = s1[i];
    }

    // 5. Cópia manual dos caracteres da segunda string logo em seguida
    for (j = 0; j < tam2; j++) {
        res[i + j] = s2[j];
    }

    // 6. Adição do terminador nulo ao final
    res[i + j] = '\0';

    // 7. Impressão do resultado e liberação de memória
    printf("String resultante: %s\n", res);
    
    free(res);

    return 0;
}