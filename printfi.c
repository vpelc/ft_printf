/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printfi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 12:24:22 by vpelc             #+#    #+#             */
/*   Updated: 2024/05/06 14:49:08 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printfi(void *i, int count)
{
	int	j;

	j = i;
	ft_putnbr_fd(i, 1);
	if (i == 0)
	{
		count++;
		return (count);
	}
	while (j > 0)
	{
		count++;
		j /= 10;
	}
	return (count);
}
