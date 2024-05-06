/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printfx.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 18:06:01 by vpelc             #+#    #+#             */
/*   Updated: 2024/05/06 18:28:31 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printfx(unsigned int x, char c, int count)
{
	if (x >= 16)
	{
		ft_put_hex(x / 16, c);
		ft_put_hex(x % 16, c);
	}
	else
	{
		if (x <= 9)
			ft_putchar_fd((x + '0'), 1);
		else
		{
			if (c == 'x')
				ft_putchar_fd((x - 10 + 'a'), 1);
			if (c == 'X')
				ft_putchar_fd((x - 10 + 'A'), 1);
		}
	}
	if (x == 0)
		count++;
	while (x > 0)
	{
		count++;
		x /= 16;
	}
	return (count);
}
