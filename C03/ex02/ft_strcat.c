#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);
int ft_strlen(char *str);

int main(void)
{
    char dest[] = "Ola";
    char src[] = "Marcella";
   
    printf("%s \n", ft_strcat(dest, src));
	//printf("%s \n", strcat(dest, src));
	
}

char *ft_strcat(char *dest, char *src)
{
    int i;
    int len;

    len = ft_strlen(dest);
    i = 0;
    while (src[i] != '\0')
    {
        dest[len + i] = src[i];
        i++;
    }
    dest[len + i] = '\0';
    return (dest);
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}