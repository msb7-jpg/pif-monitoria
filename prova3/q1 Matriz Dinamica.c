#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row, col;
    scanf("%d", &row);
    scanf("%d", &col);

    int **mat = (int**)malloc(sizeof(int*) * row);;

    for (int i = 0; i < row; i++){
        mat[i] = (int*)malloc(sizeof(int) * col);
    }
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            mat[i][j] = (i * col) + j + 1;
        }
    }

    printf("Matriz:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}