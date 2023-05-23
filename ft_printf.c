/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 17:47:25 by andmart2          #+#    #+#             */
/*   Updated: 2023/05/23 20:03:09 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		c_printed;

	c_printed = 0;
	va_start(args, s);
	c_printed = parse_printed(s, args, c_printed);
	va_end(args);
	return (c_printed);
}

/*
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

}*/
