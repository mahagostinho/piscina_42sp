#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int ft_strlen(char *str);

int main(void)
{
    char dest[] = "Ola";
    char src[] = "Marcella";
    unsigned int size;

    size = 6; //valor total do destino passado como parâmetro
    printf("%i \n", ft_strlcat(dest, src, 1));
    printf("%s \n", dest);

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

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int dest_len;
    unsigned int src_len;
    unsigned int r;
    
    src_len = ft_strlen(src);
    dest_len = ft_strlen(dest);
    i = 0;
    r = 0;
    if (size == 0 || size <= dest_len)
        return (size + src_len);
    while (src [i] != '\0' && i < size - dest_len - 1)
    {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0';
    
    return (dest_len + src_len);
}


