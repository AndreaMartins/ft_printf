/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 17:47:25 by andmart2          #+#    #+#             */
/*   Updated: 2023/05/25 18:05:18 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int ft_check_format (char format, va_list args)
{
	int cc_printed;

	cc_printed = 0;
	if (format == 'c')
		cc_printed = ft_print_char_fd(va_args(args,int),1);
	else if (format == 's')
		cc_printed = ft_print_string(va_args(args, char*));
	else if (format == 'p')
		cc_print = ft_print_ptr(va_args(args, void*));
	else if (format == 'd' || format == 'i')
		cc_print = ft_print_decimal(va_args(args, int));
	else if (format == 'u')
		cc_print =ft_print_uninteger(va_args(args, unsigned int));
	else if (format =='x' || 'X')
		cc_print = ft_print_hex(va_args(args, char*),format,0);
	else if (format == '%')
	{
		cc_printed = ft_print_char_fd('%', 1);
	}
	else
		return(-1);
	return (cc_printed);
}

int ite_printed (const char *s, va_list args, int c_printed)
{
	int i;
	int aux;
	
	i = 0;
	check = 0;

	while (s[i] != '/0')
	{
		if(s[i] = '%')
		{
			check = ft_check_format(s[i+1], args);
			if (check == -1)
				return(-1);
			//not sure about the c_printed
			c_printed += check;
			i++;
		}
		else
		{
			if(ft_print_char_fd(s[i], 1) == -1)
				return(-1);
			c_printed++;
		}
		i++;
	}
	return(c_printed);
}


int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		c_printed;

	c_printed = 0;
	va_start(args, s);
	c_printed = ite_printed(s, args, c_printed);
	va_end(args);
	return (c_printed);
}


#include <stdio.h>
int	main(void)
{
//	char a = 'a';
//	char *b = "muchas gracias";
//	unsigned int c = 4294967295;
	int dfs;
//	void *s = "holaquetal";
//	unsigned int x = 636321;

//	ft_print_decimal(a);
//	printf("\n\n\n\n\n");
	dfs = ft_printf("%d", 0);
	ft_printf("      %i", dfs);
	printf("\n\n\n");
	dfs = printf("%d", 0);
	printf("      %i", dfs);
	return (0);

}
