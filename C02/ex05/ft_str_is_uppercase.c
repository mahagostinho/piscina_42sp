/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:45:22 by marcarva          #+#    #+#             */
/*   Updated: 2022/07/25 18:45:25 by marcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
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
			if (str[i] >= 'A' && str[i] <= 'Z')
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
