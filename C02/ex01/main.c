#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	src[] = "Solar";
	char	dest[] = "Este e um teste";
	unsigned int	n;

	printf("Tamanho da src: %lu \n", strlen(src));
	printf("Tamanho da dest: %lu \n", strlen(dest));
	printf("\n");

	n = 3; 
	printf("n = %d \n", n);
	ft_strncpy(dest, src, n);
	printf("Dest modificado: %s \n", dest);
	printf("Tamanho da dest: %lu \n", strlen(dest));
	printf("Dest modificado usando a biblioteca: %s \n", strncpy(dest, src, n));
	printf("Tamanho da dest: %lu \n", strlen(dest));
	printf("\n");

	n = 5; 
	printf("n = %d \n", n);
	ft_strncpy(dest, src, n);
	printf("Dest modificado: %s \n", dest);
	printf("Tamanho da dest: %lu \n", strlen(dest));
	printf("Dest modificado usando a biblioteca: %s \n", strncpy(dest, src, n));
	printf("Tamanho da dest: %lu \n", strlen(dest));
	printf("\n");

	n = 16; 
	printf("n = %d \n", n);
	ft_strncpy(dest, src, n);
	printf("Dest modificado: %s \n", dest);
	printf("Tamanho da dest: %lu \n", strlen(dest));
	printf("Dest modificado usando a biblioteca: %s \n", strncpy(dest, src, n));
	printf("Tamanho da dest: %lu \n", strlen(dest));
}	
