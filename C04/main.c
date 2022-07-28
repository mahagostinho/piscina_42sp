#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>


int  ft_strlen(char *str);
void ft_putstr(char *str);
void ft_putnbr(int nb);
int	 ft_atoi(char *str);


//ex00

int main(void)
{
    int len;
    int b;

    len = ft_strlen("Marcella");
    printf("Tamanho da string: %d \n", len);

    b = strlen("Marcella");
    printf("strlen: %d \n", b);
} 

//ex01

int main(void)
{

ft_putstr("Teste Marcella **");

}

//ex02

int main(void)
{
    ft_putnbr(42);
}

//ex03

int	ft_atoi(char *str);

int	main(void)
{
	char *str = " ---+--+1234ab567";
	
	printf("Entrada: \n", str);
	printf("%d \n", ft_atoi(str));
    printf("Pela biblioteca: %d \n", atoi(str));
}