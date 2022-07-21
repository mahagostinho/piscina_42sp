/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:22:21 by marcarva          #+#    #+#             */
/*   Updated: 2022/07/19 19:22:26 by marcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	putchar(char c);
void	ft_print_comb2(void);

void	ft_print_comb2(void)
{
	int	first;
	int	second;

	first = 0;
	while (first <= 98)
	{
		second = first + 1;
		while (second <= 99)
		{	
			putchar(first / 10 + '0');
			putchar(first % 10 + '0');
			write(1, " ", 1);
			putchar(second / 10 + '0');
			putchar(second % 10 + '0');
			if (!(first == 98 && second == 99))
				write(1, ", ", 2);
			second++;
		}
		first++;
	}
}

void	putchar(char c)
{
	write(1, &c, 1);
}
