/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 19:20:20 by marcarva          #+#    #+#             */
/*   Updated: 2022/07/18 19:20:37 by marcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void)
{
    char letra;
    letra = 'a';
    while (letra <= 'z')
    {
        write(1, &letra, 1);
        letra++;
    }

}
