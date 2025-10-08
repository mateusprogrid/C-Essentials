/*
 5. Validação com while
 Leia uma nota e repetir a leitura enquanto estiver fora do intervalo [0, 10]. 
 Ao final, mostre “nota válida”.
*/
#include <stdio.h>

int main()
{
    float nota;
    printf("Digite uma nota: ");
    scanf("%f", &nota);
    while (nota < 0 || nota > 10)
    {
        printf("Nota invalida!\nDigite novamente: ");
        scanf("%f", &nota);
    }

    printf("Nota valida!\n");

    return 0;
    
}