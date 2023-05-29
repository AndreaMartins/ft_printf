/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uninteger.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:28:56 by andmart2          #+#    #+#             */
/*   Updated: 2023/05/29 19:51:08 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int ft_print_uninteger(unsigned int n)
{
	char c;
	size_t n_cpy;
	size_t c_printed;

	c = 0;
	c_printed = 0;
	n_cpy = n;
	//sumar 1 al c_printed y mientra la copia sea mayor que 9
	//paq que se hace esto?? objetivo es llegar al ultimo valor para contar el c_printed
	while (++c_printed && (n_cpy > 9))
	//actualiza el valor de la copia
		n_cpy = n_cpy / 10;
	//si n es mayor que 9
	if (n > 9)
	{
		n_cpy = n / 10;
		n = n % 10;
		//va imprimiendoo
		if (ft_print_decimal(n_cpy) == -1)
			return(-1);
	}
	//si n es menor que 9
	if (n < 9)
		n_cpy = n;
	c = n + '0';
	//imprimir el ultimo caracter
	if (ft_print_char_fd(c,1) == -1)
		return(-1);
	return (c_printed);
}

