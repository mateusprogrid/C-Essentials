/*
3. Contagem crescente
Leia um N (inteiro ≥ 1) e imprima de 1 até N.
*/
#include <stdio.h>

int main()
{
    int N;
    printf("Digite um numero inteiro: ");
    scanf("%d", &N);
    if (N < 1)
    {
        printf("O numero deve ser maior do que 1!!!");
    }
    else
    {
        for (int i = 1; i <= N; i++)
        {
            printf("%2d\n", i);
        }
    }

    return 0;
    
}
