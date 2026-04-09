### 1. Manipulação de Matrizes Dinâmicas (Q1 - Lista de Revisão)
Esta questão é a base para entender como criar e percorrer estruturas bidimensionais na memória.
* **Assuntos:** `malloc`, aritmética de ponteiros, loops aninhados e liberação de memória (`free`).
* **Tarefa:** Ler $n$ e $m$, alocar a matriz $n \times m$, preencher com valores e liberar a memória.

### 2. Redimensionamento de Vetores com `realloc` (Q8 - Lista de Revisão)
Essencial para entender como lidar com dados de tamanho desconhecido em tempo de execução.
* **Assuntos:** `realloc`, gerenciamento de memória dinâmica e tratamento de falhas na alocação.
* **Tarefa:** Criar uma função que lê números e dobra o tamanho do vetor sempre que ele ficar cheio, parando apenas quando o usuário digitar 0.

### 3. Lógica de Inversão e Retorno de Ponteiros (Q1 - Questões de Revisão)
Esta questão foca na lógica de transferência de dados entre estruturas e no retorno de endereços de memória.
* **Assuntos:** Ponteiro para ponteiro (`int **`), cópia invertida de dados e retorno de endereços de matrizes 128, 131].
* **Tarefa:** Implementar `criar_matriz_invertida`, que aloca uma nova matriz e preenche-a com os elementos da matriz original na ordem inversa.

### 4. Strings e Alocação Exata (Q15 - Lista de Revisão)
Trabalha com o conceito de "vetor de ponteiros" para otimizar o uso de memória em textos.
* **Assuntos:** `char **`, `strlen` e alocação sob medida para cada elemento.
* **Tarefa:** Criar um "dicionário" onde cada nome lido ocupa exatamente o espaço necessário na memória, sem desperdícios.

### 5. Estruturas Complexas e Independência de Memória (Q2 - Questões de Revisão)
A questão mais avançada, que exige o gerenciamento de structs que contêm múltiplos ponteiros.
* **Assuntos:** `struct`, `calloc`, cópia profunda (deep copy) e independência entre vetores.
* **Tarefa:** Implementar `substituir_personagem`, garantindo que todas as cópias no vetor de saída sejam independentes do vetor de entrada (alocando novos nomes e novos vetores de itens para cada personagem).
