#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
    int a;
    int b;
    int *div;
    int *mod;

    a = 13;
    b = 4;
    div = &a;
    mod = &b;

    printf("Endereço de div = %p\n", div);
    printf("Endereço de mod = %p\n", mod);
    printf("valor div: %d \n", *div);
    printf("valor mod: %d \n", *mod);
   
    ft_div_mod(a, b, div, mod);

    printf("Endereço de div = %p\n", div);
    printf("Endereço de mod = %p\n", mod);
    printf("valor div: %d \n", *div);
    printf("valor mod: %d \n", *mod);
}


