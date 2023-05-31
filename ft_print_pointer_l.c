/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer_l.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 19:45:45 by andmart2          #+#    #+#             */
/*   Updated: 2023/05/31 20:45:59 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void print_p()
{
}


void ft_print_pointer_l(unsigned long p, int *len)
{
	char *hex;

	hex = "0123456789abcdef"; 

	ft_print_string_l("0x", len);
	if (*len != -1)
	{
		if( p >= 16 && *len != -1)
			ft_print_pointer_l( p / 16, len);
		if( *len != -1 && ft_print_char_l(hex[p %16], len) == -1)
			*len = -1;
	}
}
