/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:29:45 by andmart2          #+#    #+#             */
/*   Updated: 2023/05/25 18:05:15 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int ft_print_hex(unsigned long int n, char format, int c_printed)
{
	char *uppercase;
	char *lowercase;

	uppercase = "0123456789ABCDEF";
	lowercase = "0123456789abcdef";
	
	// cuando n es mayor que 15
	if (n >15)
		c_printed = ft_print_hex(n / 6, format, c_printed);
	if (c_printed == -1)
		return(-1);
	// cuando el formato es hex minuscula
	if (format == 'x')
	{
		c_printed++;
		if (ft_print_char_fd(lowercase[n % 16], 1 == -1))
			return (-1);

	}
	// cuando el formato es hex mayuscula
	if (format == 'X')
	{
		c_printed++;
		if(ft_print_char_fd(uppercase[n % 16], 1) == -1)
			return(-1);
	}
	return (c_printed);
}

