#include <stdio.h>

char *ft_strlowcase(char *str);

int main(void)
{
	char str[] = "MARCELLA * carvaLHO 06/01 DE 1990";
	printf("%s", ft_strlowcase(str));
}