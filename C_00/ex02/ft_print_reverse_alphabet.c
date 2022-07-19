/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 19:29:26 by marcarva          #+#    #+#             */
/*   Updated: 2022/07/18 19:29:33 by marcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_print_reverse_alphabet(void)
{
    char letra;
    letra = 'z';
    
    while(letra >= 'a')
    {
        write(1, &letra, 1);
        letra--;
    }
}

