/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:27:07 by marcarva          #+#    #+#             */
/*   Updated: 2022/07/25 18:27:10 by marcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
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
			if (str[i] >= 'a' && str[i] <= 'z')
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
