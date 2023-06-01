/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_l.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 16:09:34 by andmart2          #+#    #+#             */
/*   Updated: 2023/06/01 12:48:35 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_print_unsigned_l(unsigned int b, int *len)
{
	if (b > 9 && *len != -1)
	{
		ft_print_number_l(b / 10, len);
	}	
	if (*len != -1 && ft_print_char_l((b % 10) + '0', len) == -1)
		*len = -1;
}
