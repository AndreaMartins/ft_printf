/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:20:17 by andmart2          #+#    #+#             */
/*   Updated: 2023/05/25 13:02:43 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

int	ft_print_string(char *str )
{
	int i;

	i = 0;
	if (str == NULL)
		str = "(null)";
	while (str[i] != '\0')
	{
		if (ft_print_char_fd (str[i], 1 == -1))
			return (-1);
		i++;
	}
	return(i);
}
