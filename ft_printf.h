/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 17:41:13 by andmart2          #+#    #+#             */
/*   Updated: 2023/05/30 21:27:23 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int		ft_print_char_l(char c, int *len);
void	ft_print_string_l(char *s, int *len);
void	ft_print_number_l(int a, *len);

#endif
