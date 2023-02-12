/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 15:59:44 by andmart2          #+#    #+#             */
/*   Updated: 2023/02/12 16:12:00 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	first_letter;
	char	last_letter;

	first_letter = 'z';
	last_letter = 'a';
	while (first_letter >= last_letter)
	{
		ft_putchar(first_letter);
		first_letter--;
	}
}
