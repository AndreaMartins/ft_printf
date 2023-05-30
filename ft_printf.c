/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 17:47:25 by andmart2          #+#    #+#             */
/*   Updated: 2023/05/30 20:22:58 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include <stdio.h>

static void	check_type(char c, va_list *args, int *len)
{
	if (c == 'c')
		ft_print_char_l(va_arg(*args, int), len);
	if (c == 's')
		ft_print_string_l(va_arg(*args, *char), len);
	if ( c == '%')
		ft_print_char_l('%', len);
}

int	ft_printf (const char *str, ...)
{
	va_list	args;
	size_t	i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, str);
	while(str[i] && len != -1 )
	{
		if (str[i] == '%')
		{
			i++;
			check_type(str[i], &args, &len);
			i++;
		}
		else
		{
			ft_print_char_l(str[i], &len);
			i++;
		}
		if (len == -1)
			return(-1);
	}
	va_end(args);
	return(len);
}

/*int	main()
{	
	ft_printf("%c\n",'m');
	printf("%c",'m');
}
*/
/* 	
Test for 
c (char)
s (string)
i (integer)
d (decimal)
u (unsigned)
X (Hexadecimal CAPS)
x (hexadecimal lowerc)
p (pointer)
% (% sign)

#include <stdio.h>

int main()
{
	char	c = 'o';
	char	*str = "Peepo goes shopping";
	int 	num = -42;
	unsigned int	unum = 2882343476;
	
	ft_printf("--------------------------------------------\n");	
	ft_printf("Test for %%c\t-->\t%c\n", c);
	printf("OG for %%c\t-->\t%c\n", c);
	ft_printf("--------------------------------------------\n");
	ft_printf("Test for %%s\t-->\t%s\n", str);
	printf("OG for %%s\t-->\t%s\n", str);
	ft_printf("--------------------------------------------\n");
	ft_printf("Test for %%i\t-->\t%i\n", num);
	printf("OG for %%i\t-->\t%i\n", num);
	ft_printf("--------------------------------------------\n");
	ft_printf("Test for %%d\t-->\t%d\n", num);
	printf("OG for %%d\t-->\t%d\n", num);
	ft_printf("--------------------------------------------\n");
	ft_printf("Test for %%u\t-->\t%u\n", unum);
	printf("OG for %%u\t-->\t%u\n", unum);
	ft_printf("--------------------------------------------\n");
	ft_printf("Test for %%X\t-->\t%X\n", unum);
	printf("OG for %%X\t-->\t%X\n", unum);
	ft_printf("--------------------------------------------\n");
	ft_printf("Test for %%x\t-->\t%x\n", unum);
	printf("OG for %%x\t-->\t%x\n", unum);
	ft_printf("--------------------------------------------\n");
	ft_printf("Test for %%p\t-->\t%p\n", str);
	printf("OG for %%p\t-->\t%p\n", str);
	ft_printf("--------------------------------------------\n");
	ft_printf("Test for all %%\n\n%c\n%s\n%i\n%d\n%u\n%X\n%x\n%p\n", c, str, 
	num, num, unum, unum, unum, str);
	ft_printf("--------------------------------------------\n");
}
*/
