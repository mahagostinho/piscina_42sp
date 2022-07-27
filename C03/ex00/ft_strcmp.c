#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int main(void)
{
    
    printf("s1 = ola, s2 = ola, retorno: %d \n", ft_strcmp("ola", "ola"));
	printf("s1 = maria, s2 = mario, retorno: %d \n", ft_strcmp("maria", "mario"));
	printf("s1 = mario, s2 = maria, retorno: %d \n", ft_strcmp("cores", "cor"));
	printf("Usando a biblioteca \n");
	printf("s1 = ola, s2 = ola, retorno: %d \n", strcmp("ola", "ola"));
	printf("s1 = maria, s2 = mario, retorno: %d \n", strcmp("maria", "mario"));
	printf("s1 = mario, s2 = maria, retorno: %d \n", strcmp("cores", "cor"));
}

int ft_strcmp(char *s1, char *s2)
{
    int i;
    int r;

	i = 0;
    r = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
    r = s1[i] - s2[i];
    if (r == 0)
        return (0);
    else if (r > 0)
       return (1);
    else
        return (-1);
}
