/*
8. Vetor básico — inversão
Leia 5 inteiros em um vetor e imprima os valores na ordem
inversa.
*/
#include <stdio.h>

int main()
{
    int vetor[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    printf("\nNumeros na ordem inversa:\n");
    for (int i = 4; i >= 0; i--)
    {
        printf("%d ", vetor[i]);
    }

    printf("\n");

    return 0;
    
}