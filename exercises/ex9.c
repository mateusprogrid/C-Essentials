/*
9. Vetor + for — média
Leia 10 valores reais (float) em um vetor, calcule e mostre
a média.
*/
#include <stdio.h>

int main()
{
    float numeros[10], soma = 0, media;
    for (int i = 0; i < 10; i++)
    {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &numeros[i]);
        soma += numeros[i];
    }

    media = soma / 10;

    printf("\nA media dos valores digitados eh: %.2f\n", media);

    return 0;
    
}