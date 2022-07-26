/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:57:14 by marcarva          #+#    #+#             */
/*   Updated: 2022/07/25 18:57:16 by marcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	int	i;
	int	r;

	if (str[0] == '\0')
	{
		r = 1;
	}
	else
	{
		i = 0;
		while (str[i] != '\0')
		{
			if (str[i] >= 32 && str[i] <= 126)
			{
				r = 1;
			}
			else
			{
				r = 0;
				break ;
			}
			i++;
		}
	}
	return (r);
}
