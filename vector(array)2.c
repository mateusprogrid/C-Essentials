#include <stdio.h>

int main()
{
    int vetor[5];
    vetor[0] = 10;
    vetor[1] = 20;
    vetor[2] = 30;
    vetor[3] = 40;
    vetor[4] = 50;

    for (int i = 0; i < 5; i++)
    {
        printf("O valor da posicao eh [%d]: %d \n", i, vetor[i]);
    }

    return 0;

}

/*
O valor da posicao eh [0]: 10 
O valor da posicao eh [1]: 20 
O valor da posicao eh [2]: 30
O valor da posicao eh [3]: 40
O valor da posicao eh [4]: 50
*/