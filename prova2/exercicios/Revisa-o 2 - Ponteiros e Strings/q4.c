// 4. O Verificador de Documentos — Comparador de Sufixos

// Um  sistema  de  arquivamento  precisa  classificar  documentos  pelo  sufixo  de  seus  nomes:  .pdf,

// .txt,  .exe...  O  problema:  a  biblioteca  padrão  foi  removida  do  ambiente  restrito.  Você  precisa
// recriar a lógica do zero.

// Crie  a  função  compara_sufixo  que  verifica  se  str  termina  exatamente  com  o  conteúdo  de

// sufixo. Para encontrar os comprimentos, itere os ponteiros até o '\0'. Retorne 1 (verdadeiro)
// ou 0 (falso).

// int compara_sufixo(char *str, char *sufixo);

// Exemplos: compara_sufixo("relatorio.pdf", ".pdf") → 1 |

// compara_sufixo("imagem.png", ".jpg") → 0.

// n Restrição: proibido usar qualquer função de <string.h>.
#include <stdbool.h>
#include <stdio.h>

int strlength(char *string){
    int result = 0;
    while (*string != '\0'){
        result++;
        string++;
    }
    return result;
}

bool compara_sufixo(char *string, char *sufixo){
    int tamanho_string = strlength(string);
    int tamanho_sufixo = strlength(sufixo);

    if(tamanho_string < tamanho_sufixo) return false;
    
    char *left = sufixo;
    char *right = string + (tamanho_string - tamanho_sufixo);

    while (right < string + tamanho_string){

        if(*left != *right){
            return false;
        }

        left++;
        right++;
    }

    return true;
}


int main(){
    char texto[] = ".pdf";
    char sufixo[] = ".pdf";

    bool tem = compara_sufixo(texto, sufixo);

    printf("%s", tem ? "Tem sufixo" : "Não tem");
    
    return 0;
}