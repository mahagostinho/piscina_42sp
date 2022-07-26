#include <stdio.h>

int ft_str_is_uppercase(char *str);

int main(void)
{
    int r;

    r = ft_str_is_uppercase("MAH");
    printf("Return: %d", r);
    printf("\n");

    r = ft_str_is_uppercase("marCELla");
    printf("Return: %d", r);
    printf("\n");

    r = ft_str_is_uppercase("");
    printf("Return: %d", r);
    printf("\n");
}