/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_uint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 12:24:22 by vpelc             #+#    #+#             */
/*   Updated: 2024/05/23 16:52:25 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_put_unbr(int n)
{
	unsigned long	l;

	l = n;
	if (l >= 10)
	{
		ft_put_unbr(l / 10);
		ft_putchar_nb(l % 10 + 48);
	}
	if (l < 10)
		ft_putchar_nb(l % 10 + 48);
}

int	ft_printf_uint(unsigned int i)
{
	unsigned int	j;
	int				count;

	count = 0;
	j = i;
	ft_put_unbr(i);
	if (i == 0)
	{
		count++;
		return (count);
	}
	while (j != 0)
	{
		count++;
		j /= 10;
	}
	return (count);
}
