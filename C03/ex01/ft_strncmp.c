#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
    
    printf("s1 = ola, s2 = ola, n = 2, retorno: %d \n", ft_strncmp("ola", "ola", 2));
	printf("s1 = maria, s2 = mario, n = 5, retorno: %d \n", ft_strncmp("maria", "mario", 5));
	printf("s1 = mario, s2 = maria, n = 3, retorno: %d \n", ft_strncmp("mario", "maria", 3));
	printf("s1 = mariana, s2 = marialice, n = 3, retorno: %d \n", ft_strncmp("mariana", "marialice", 6));
	printf("Usando a biblioteca \n");
	printf("s1 = ola, s2 = ola, n = 2, retorno: %d \n", strncmp("ola", "ola", 2));
	printf("s1 = maria, s2 = mario, n = 5, retorno: %d \n", strncmp("maria", "mario", 5));
	printf("s1 = mario, s2 = maria, n = 3, retorno: %d \n", strncmp("maria", "mario", 3));
	printf("s1 = mariana, s2 = marialice, n = 6, retorno: %d \n", strncmp("mariana", "marialice", 6));
}

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n)
	{
		i++;
	}
		return (s1[i] - s2[i]);
}
