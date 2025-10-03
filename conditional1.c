#include <stdio.h>

int main()
{
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("O numero eh positivo");
    }
    else
    {
        if (num == 0)
        {
            printf("O numero eh igual a zero");
        }
        else
        {
            printf("O numero eh negativo");
        }
        
    }

    return 0;
    
}

/*
Também funcionaria muito bem sem estar aninhado.
De forma encadeada:
int main()
{
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("O numero eh positivo");
    }
    else if (num == 0)
    {
        printf("O numero eh igual a zero");
    }
    else
    {
        printf("O numero eh negativo");
    }

    return 0;
    
}
*/