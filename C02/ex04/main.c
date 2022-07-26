#include <stdio.h>

int ft_str_is_lowercase(char *str);

int main(void)
{
    int r;

    r = ft_str_is_lowercase("marcella");
    printf("Return: %d", r);
    printf("\n");

    r = ft_str_is_lowercase("marCELla");
    printf("Return: %d", r);
    printf("\n");

    r = ft_str_is_lowercase("");
    printf("Return: %d", r);
    printf("\n");

}