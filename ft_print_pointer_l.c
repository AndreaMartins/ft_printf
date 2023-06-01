/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer_l.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 19:45:45 by andmart2          #+#    #+#             */
/*   Updated: 2023/06/01 12:03:24 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	print_p(unsigned long p, int *len)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (*len != -1)
	{
		if (p >= 16 && *len != -1)
			print_p(p / 16, len);
		if (*len != -1 && ft_print_char_l(hex[p % 16], len) == -1)
			*len = -1;
	}
}

void	ft_print_pointer_l(unsigned long p, int *len)
{
	ft_print_string_l("0x", len);
	print_p(p, len);
}
