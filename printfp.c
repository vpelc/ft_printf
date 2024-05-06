/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printfp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 16:17:10 by vpelc             #+#    #+#             */
/*   Updated: 2024/05/06 15:54:27 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static	void	convert_hex(unsigned long p)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (p >= 16)
	{
		convert_hex(p / 16);
	}
	ft_putchar_fd(base[p % 16], 1);
}

int	ft_printfp(unsigned long p, int count)
{
	ft_putstr_fd("0x", 1);
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
