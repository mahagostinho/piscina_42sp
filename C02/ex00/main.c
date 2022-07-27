#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	src[] = "Lua cheia";
	char	dest[] = "Cachorrinhos fofinhos";	

	printf("Src: %s \n", src);
	printf("Dest antes: %s \n", dest);
	printf("Dest depois de ft_strcpy: %s \n", ft_strcpy(dest, src));

	printf("Usando strcpy da biblioteca string.h: %s \n", strcpy(dest, src));
}
