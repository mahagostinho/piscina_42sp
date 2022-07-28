#include<unistd.h>
#include <stdio.h>
#include <string.h>

void	ft_putnbr(int nb);

void	ft_putnbr(int nb)
{
	int		res;
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		nb = 147483648;
	}
	if (nb >= -2147483648 && nb < 0)
	{
		nb = nb * (-1);
		write(1, "-", 1);
	}	
	res = nb % 10;
	c = res + '0';
	if (nb <= 9)
	{
		write(1, &c, 1);
		return ;
	}
	else
	{
		ft_putnbr(nb / 10);
		write(1, &c, 1);
	}
}

int main(void)
{
    ft_putnbr(2147483647);
    printf("\n");
}
