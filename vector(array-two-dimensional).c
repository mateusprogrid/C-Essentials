#include <stdio.h>

int main()
{
    int matriz[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int linhas = 3, colunas = 4;

    printf("Matriz 3x4\n");
    for ( int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%6d", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;

}

/*
Matriz 3x4
     1     2     3     4
     5     6     7     8
     9    10    11    12

Quem controla as linhas é o laço
externo -->  for ( int i = 0; i < linhas; i++)
Quem controla as colunas é o laço
interno -->  for (int j = 0; j < colunas; j++)
"%6d" --> determina o tamanho de espaço que o
decimal vai consumir (para deixar a matriz 
visivelmente responsiva)
*/