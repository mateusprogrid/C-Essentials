/*
4. Soma de 1 a N
Leia um N (inteiro ≥ 1) e calcule a soma de 1 até N usando for.
*/
#include <stdio.h>

int main()
{
    int N, soma = 0;
    printf("Digite um numero inteiro: ");
    scanf("%d", &N);
    if (N < 1)
    {
        printf("O numero deve ser maior ou igual a 1!!!");
    }
    else
    {
        for (int i = 1; i <= N; i++)
            soma += i;
        {
            printf("%d\n", soma);
        }
        
    }
    return 0;
    
}