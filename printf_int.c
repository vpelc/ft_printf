/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 12:24:22 by vpelc             #+#    #+#             */
/*   Updated: 2024/05/23 16:52:14 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_int(int i)
{
	int	j;
	int	count;

	count = 0;
	j = i;
	ft_putnbr(i);
	if (i == 0)
	{
		count++;
		return (count);
	}
	if (j < 0)
		count++;
	while (j != 0)
	{
		count++;
		j /= 10;
	}
	return (count);
}
