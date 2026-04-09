// Criar um "dicionário" onde cada nome lido ocupa exatamente o espaço necessário na memória, sem desperdícios.

int main() {
    // Read the number of names
    int n;
    scanf("%d", &n);
    
    // Allocate array of pointers to store each name
    char **lista = (char **)malloc(n * sizeof(char *));

    // Temporary buffer to read input
    char buffer[100];

    // Read each name and store it with exact memory allocation
    for (int i = 0; i < n; i++) {
        scanf("%s", buffer);

        // Allocate memory for each name (length + 1 for null terminator)
        lista[i] = (char *)malloc((strlen(buffer) + 1) * sizeof(char));

        // Copy the name from buffer to allocated memory
        strcpy(lista[i], buffer);
    }
    
    // Free each allocated name
    for (int i = 0; i < n; i++) {
        free(lista[i]);
    }
    
    // Free the array of pointers
    free(lista);
    return 0;
}