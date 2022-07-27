#include <stdio.h>

int ft_str_is_alpha(char *str);

int main(void)
{
    int r;

    r = ft_str_is_alpha("");
    printf("Return: %d", r);
    printf("\n");

    r = ft_str_is_alpha("nfbhjJNSLFJH");
    printf("Return: %d", r);
    printf("\n");

    r = ft_str_is_alpha("FS625kmd");
    printf("Return: %d", r);
    printf("\n");
}
