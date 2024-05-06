/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:24:19 by vpelc             #+#    #+#             */
/*   Updated: 2024/05/06 13:44:25 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_check_arg(char *s)
{
	if (s[1] == 'c')
		return ;
	if (s[1] == 's')
		return ;
	if (s[1] == 'p')
		return ;
	if (s[1] == 'd')
		return ;
	if (s[1] == 'i')
		return ;
	if (s[1] == 'u')
		return ;
	if (s[1] == 'x')
		return ;
	if (s[1] == 'X')
		return ;
	if (s[1] == '%')
		return ;
}

int	ft_printf(const char *str, ...)
{
	int	count;

	count = 0;
	return (count);
}
