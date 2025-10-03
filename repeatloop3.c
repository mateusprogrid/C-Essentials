#include <stdio.h>

int main()
{
    int j = 10;
    for (int j = 10; j <= 15; j++)
    {
        printf("%d \n", j);
    }
    printf("%d \n", j);

    return 0;
}

/*
10 
11 
12
13
14
15
16
inicializando a variável fora do 
escopo for, o loop irá incrementar 
e depois fazer a condição.
Porém, se fosse normal:
int main()
{
    int j = 10
    for (int j = 10; j <= 15; j++)
    {
        printf("%d \n", j);
    }
    
    printf("%d \n", j);

    return 0;
}

10 
11 
12
13
14
15
10
O último printf, imprime 10. É uma questão
de escopo, por exemplo, se o último printf
fosse assim printf("%d \n", i);
ia dar ERRO!! Pois eu não posso acessar o i 
do for
*/