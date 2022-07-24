#include <stdio.h>
#include <string.h>

int ft_strlen(char *str);

int main(void)
{
    int len;
    int b;

    len = ft_strlen("Marcella");
    printf("Tamanho da string: %d \n", len);

    b = strlen("Marcella");
    printf("strlen: %d \n", b);
} 
