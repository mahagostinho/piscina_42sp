#include <stdio.h>

int ft_str_is_numeric(char *str);

int main(void)
{
    int r;

    r = ft_str_is_numeric("");
    printf("Return: %d", r);
    printf("\n");
    r = ft_str_is_numeric("965");
    printf("Return: %d", r);
    printf("\n");
    r = ft_str_is_numeric("9e6w5");
    printf("Return: %d", r);
}