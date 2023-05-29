/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:21:01 by andmart2          #+#    #+#             */
/*   Updated: 2023/05/29 19:02:23 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

int	ft_print_ptr(void *ptr)
{
	int	c_printed;
	int aux;

	if (ft_print_string("0x") == -1)
		return(-1);
	c_printed = 2;
	aux = ft_print_hex((unsigned long)ptr, 'x', 0);
	if (aux == -1)
		return(-1);
	c_printed += aux;
	return (c_printed);
}
