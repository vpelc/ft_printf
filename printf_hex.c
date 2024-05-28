/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 18:06:01 by vpelc             #+#    #+#             */
/*   Updated: 2024/05/23 16:52:09 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count_hex(unsigned int x)
{
	int	count;

	count = 0;
	if (x == 0)
		count++;
	while (x > 0)
	{
		count++;
		x /= 16;
	}
	return (count);
}

int	ft_printf_hex(unsigned int x, char c)
{
	if (x >= 16)
	{
		ft_printf_hex(x / 16, c);
		ft_printf_hex(x % 16, c);
	}
	else
	{
		if (x <= 9)
			ft_putchar_nb((x + '0'));
		else
		{
			if (c == 'x')
				ft_putchar_nb((x - 10 + 'a'));
			if (c == 'X')
				ft_putchar_nb((x - 10 + 'A'));
		}
	}
	return (count_hex(x));
}
