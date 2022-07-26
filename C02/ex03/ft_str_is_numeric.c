/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:22:14 by marcarva          #+#    #+#             */
/*   Updated: 2022/07/25 18:22:18 by marcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	r;

	r = 0;
	i = 0;
	if (str[0] == '\0')
		r = 1;
	else
	{
		while (str[i] != '\0')
		{
			if (str[i] >= '0' && str[i] <= '9')
			{
				r = 1;
				i++;
			}
			else
			{
				r = 0;
				break ;
			}
		}
	}
	return (r);
}
