/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 14:28:49 by vpelc             #+#    #+#             */
/*   Updated: 2024/05/23 16:52:22 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_str(char *s)
{
	int	count;

	count = 0;
	if (!s)
	{
		ft_putstr("(null)");
		return (6);
	}
	ft_putstr(s);
	count += ft_strlen(s);
	return (count);
}
