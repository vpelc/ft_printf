/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printfc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 14:28:49 by vpelc             #+#    #+#             */
/*   Updated: 2024/05/06 13:46:41 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printfc(char c, int count)
{
	ft_putchar_fd(c, 1);
	count++;
	return (count);
}
