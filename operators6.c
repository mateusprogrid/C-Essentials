#include <stdio.h>

int main()
{
    int a = 5, b = 3;

    printf("a > b eh: %d \n", a > b);
    printf("a < b eh: %d \n", a < b);
    printf("a >= b eh: %d \n", a >= b);
    printf("a <= b eh: %d \n", a <= b);
    printf("a == b eh: %d \n", a == b);
    printf("a != b eh: %d \n", a != b);
    printf("(a > b) && (b > 0) eh: %d \n", (a > b) && (b > 0));
    printf("(a < b) && (b > 0) eh: %d \n", (a < b) && (b > 0));
    printf("(a > b) || (b > 0) eh: %d \n", (a > b) || (b > 0));
    printf("(a < b) || (b > 0) eh: %d \n", (a < b) || (b > 0));
    printf("!(a == b) eh: %d \n", !(a == b));
    printf("!(a > b) eh: %d \n", !(a > b));

    return 0;

}