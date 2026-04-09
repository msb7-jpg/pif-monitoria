typedef struct Aluno{
    char nome[50];
    float nota1;
    float nota2;
    float nota3;
} Aluno;

float calcularMedia(Aluno aluno){
    return (aluno.nota1 + aluno.nota2 + aluno.nota3)/3;
}

int buscarMelhorAluno(Aluno alunos[], int numeroAlunos){
    int maxAvg = calcularMedia(alunos[0]);
    int maxIndex = 0;

    for (int i = 0; i < numeroAlunos; i++){
        int avg = calcularMedia(alunos[i]);
        if(avg > maxAvg){
            maxAvg = avg;
            maxIndex = i;
        }
    }

    printf("Melhor aluno: %d com media ", maxAvg);
    return maxIndex;
}