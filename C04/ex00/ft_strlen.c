#include <stdio.h>
#include <string.h>
#include<unistd.h>

int ft_strlen(char *str);

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

int main(void)
{
    int len;
    int b;

    len = ft_strlen("Marcella");
    printf("Tamanho da string: %d \n", len);

    b = strlen("Marcella");
    printf("strlen: %d \n", b);
} 