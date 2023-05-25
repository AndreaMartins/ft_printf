/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_decimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:22:02 by andmart2          #+#    #+#             */
/*   Updated: 2023/05/25 15:56:32 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int ft_print_decimal(int n)
{
	char *num;
	int c_printed;

	c_printed = 0;
	num = ft_itoa(n);
	if(!num)
		return(-1);
	c_printed = ft_print_string(num);
	if (c_printed == -1)
	{
		//free num to free itoa
		free(num);
		return(-1);
	}
	free(num);
	return(c_printed);
}
