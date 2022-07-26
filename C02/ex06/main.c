#include <stdio.h>

int ft_str_is_printable(char *str);

int main(void)
{
    int r;

    r = ft_str_is_printable(" /*-+65\r8;\0,nldksj");
    printf("Return: %d", r);
    printf("\n");

    r = ft_str_is_printable("marCELla");
    printf("Return: %d", r);
    printf("\n");

    r = ft_str_is_printable("");
    printf("Return: %d", r);
    printf("\n");
}