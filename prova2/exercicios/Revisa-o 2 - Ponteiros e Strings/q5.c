// 5. A Censura In-Place — Remoção de Caractere

// int remove_ocorrencias(char *str, char alvo);

// Exemplo: remove_ocorrencias("banana", 'a') → string vira "bnn", retorno = 3.

// n Restrição: é terminantemente proibido declarar qualquer array auxiliar. Use somente ponteiros e
// variáveis escalares.

// n Dica: leitura avança sempre; escrita avança só quando o caractere atual NÃO é o alvo. Não esqueça do '\0'

// ao fina
#include <stdio.h>

int remove_ocorrencias(char *str, char alvo) {
    char *leitura = str;
    char *escrita = str;

    int removidos = 0;

    while (*leitura != '\0') {

        if (*leitura == alvo) {
            removidos++;
        } else {
            *escrita = *leitura;
            escrita++;
        }

        leitura++;
    }

    *escrita = '\0'; 

    return removidos;
}

int main()
{
    
    char text[] = "banana";

    int digitos = remove_ocorrencias(text, 'a');

    printf("Texto: %s Digitos: %d", text, digitos);
    
    return 0;
}
