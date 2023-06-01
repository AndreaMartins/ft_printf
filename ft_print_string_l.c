/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string_l.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 20:00:56 by andmart2          #+#    #+#             */
/*   Updated: 2023/06/01 12:47:40 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_string_l(char *s, int *len)
{
	size_t	i;

	i = 0;
	if (!s)
		s = "(null)";
	while (s[i] && *len != -1)
	{
		if (ft_print_char_l(s[i], len) == -1)
			*len = -1;
		i++;
	}	
}
