#include <stdio.h>

void ft_swap(int *a, int *b);

int main(void)
{
    int n1;
    int n2;
    int *a;
    int *b;

    n1 = 42;
    n2 = 54;
    a = &n1;
    b = &n2;
    
    printf("Endereço de a = %p\n", a);
    printf("valor 1: %d \n", *a);
    printf("Endereço de b = %p\n", b);
    printf("valor 2: %d \n", *b);
    ft_swap(a, b);
    printf("Endereço de a = %p\n", a);
    printf("valor 1: %d \n", *a);
    printf("Endereço de b = %p\n", b);
    printf("valor 2: %d \n", *b);
}