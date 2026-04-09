// Cadastro dinâmico de notas com struct

// Escreva um programa que:

// • defina uma struct Aluno com:

//   n nome do aluno
//   n notas (vetor dinâmico)
// • leia a quantidade de alunos n
// • declare um array de structs Aluno de tamanho n

// • para cada aluno:
//   n leia o nome
//   n leia a quantidade de notas
//   n aloque dinamicamente as notas
//   n leia as notas

// • calcule e imprima:
//   n a média de cada aluno
//   n a média geral
// • libere toda a memória ao final

typedef struct Aluno{
    char nome[100];
    int* notas;
    int numNotas;
} Aluno;

int main(){
    int numAlunos;

    scanf("%d", &numAlunos);

    Aluno* alunos = (Aluno*)malloc(numAlunos * sizeof(Aluno));
    
    for (int i = 0; i < numAlunos; i++){
        scanf("%s", alunos[i].nome);
        
        scanf("%d", &alunos[i].numNotas);
        alunos[i].notas = (int*)malloc(alunos[i].numNotas * sizeof(int));
        
        for (int j = 0; j < alunos[i].numNotas; j++){
            scanf("%d", &alunos[i].notas[j]);
        }
    }
    
    // Calculate and print averages
    double mediaGeral = 0;
    for (int i = 0; i < numAlunos; i++){
        double media = 0;
        for (int j = 0; j < alunos[i].numNotas; j++){
            media += alunos[i].notas[j];
        }
        media /= alunos[i].numNotas;
        mediaGeral += media;
        printf("%s: %.2f\n", alunos[i].nome, media);
    }
    mediaGeral /= numAlunos;
    printf("Media Geral: %.2f\n", mediaGeral);
    
    // Free memory
    for (int i = 0; i < numAlunos; i++){
        free(alunos[i].notas);
    }
    free(alunos);
    
    return 0;
}