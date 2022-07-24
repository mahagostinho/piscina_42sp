#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
    int n1;
    int n2;
    int *a;
    int *b;

    n1 = 23;
    n2 = 5;
    a = &n1;
    b = &n2;
    printf("Endereço de div = %p\n", a);
    printf("Endereço de mod = %p\n", b);
    printf("valor div: %d \n", *a);
    printf("valor mod: %d \n", *b);

    ft_ultimate_div_mod(a, b);

    printf("Endereço de div = %p\n", a);
    printf("Endereço de mod = %p\n", b);
    printf("valor div: %d \n", *a);
    printf("valor mod: %d \n", *b);
}
