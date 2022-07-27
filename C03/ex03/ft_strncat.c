#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);
unsigned int ft_strlen(char *str);

int main(void)
{
    char dest[] = "Eu te amo";
    char src[] = " Pedro Ivo";
   
    printf("%s \n", ft_strncat(dest, src, 6));
	//printf("%s \n", strncat(dest, src, 6));
	
}

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int i;
    unsigned int len;
    
    len = ft_strlen(dest);
    i = 0;
    while (src[i] != '\0' && i < nb)
    {
        dest[len + i] = src[i];
        i++;
    }
    dest[len + i] = '\0';
    return (dest);
}

unsigned int ft_strlen(char *str)
{
    unsigned int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}