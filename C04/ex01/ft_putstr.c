#include <unistd.h>
#include <stdio.h>
#include <string.h>

void ft_putstr(char *str);

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;  
    }
}

int main(void)
{

ft_putstr("Teste Marcella **");
printf("\n");

}
