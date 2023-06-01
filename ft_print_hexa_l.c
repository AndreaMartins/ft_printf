/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa_l.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 18:55:41 by andmart2          #+#    #+#             */
/*   Updated: 2023/06/01 12:41:14 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_print_hexa_l(int n, int *len, char c)
{
	unsigned int	number;
	char			*upper_hexa;
	char			*lower_hexa;

	upper_hexa = "0123456789ABCDEF";
	lower_hexa = "0123456789abcdef";
	number = (unsigned int) n;
	if (number >= 16 && *len != -1)
		ft_print_hexa_l(number / 16, len, c);
	if (c == 'x')
	{
		if (*len != -1 && ft_print_char_l(lower_hexa[number % 16], len) == -1)
			*len = -1;
	}
	if (c == 'X')
	{
		if (*len != -1 && ft_print_char_l(upper_hexa[number % 16], len) == -1)
			*len = -1;
	}
}
