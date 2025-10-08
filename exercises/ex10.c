/*
Vetor + busca do maior
Leia 6 inteiros em um vetor e mostre o maior valor e a
posição (índice) em que ele aparece.
*/
#include <stdio.h>

int main()
{
    int numeros[6];
    int maior, indice_maior;
    for (int i = 0; i < 6; i++)
    {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    maior = numeros[0];
    indice_maior = 0;

    for (int i = 0; i < 6; i++)
    {
        if (numeros[i] > maior)
        {
            maior = numeros[i];
            indice_maior = i;
        }
        
    }

    printf("\nO maior valor eh: %d\n", maior);
    printf("Ele esta na posicao (indice): %d\n", indice_maior);

    return 0;
    
    
}