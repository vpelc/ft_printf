/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 16:17:10 by vpelc             #+#    #+#             */
/*   Updated: 2024/05/23 16:52:18 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	convert_hex(unsigned long long p)
{
	char	*base;

	base = "0123456789abcdef";
	if (p >= 16)
	{
		convert_hex(p / 16);
	}
	ft_putchar_nb(base[p % 16]);
}

int	ft_printf_ptr(unsigned long long p)
{
	int	count;

	count = 0;
	ft_putstr("0x");
	count += 2;
	convert_hex(p);
	if (p == 0)
		count++;
	while (p > 0)
	{
		count++;
		p /= 16;
	}
	return (count);
}
