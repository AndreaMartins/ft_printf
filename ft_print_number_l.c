/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number_l.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 21:08:56 by andmart2          #+#    #+#             */
/*   Updated: 2023/06/01 12:43:23 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_print_number_l(int a, int *len)
{
	unsigned int	ua;

	if (a < 0 && *len != -1)
	{
		ua = (unsigned int) -a;
		if (ft_print_char_l('-', len) == -1)
			*len = -1;
	}
	else
		ua = (unsigned int) a;
	if (ua > 9 && *len != -1)
	{
		ft_print_number_l(ua / 10, len);
	}
	if (*len != -1 && ft_print_char_l((ua % 10) + '0', len) == -1)
		*len = -1;
}
