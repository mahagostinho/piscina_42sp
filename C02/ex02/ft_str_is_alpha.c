/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:22:19 by marcarva          #+#    #+#             */
/*   Updated: 2022/07/25 15:22:24 by marcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
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
			if ((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z'))
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
