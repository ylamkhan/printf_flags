/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnumber_hex2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamkhan <ylamkhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:00:48 by ylamkhan          #+#    #+#             */
/*   Updated: 2022/11/14 09:07:22 by ylamkhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnumber_hex2(unsigned int c)
{
	int		j;
	char	*p;

	p = "0123456789abcdef";
	j = 0;
	if (c >= 16)
	{
		j += ft_putnumber_hex2(c / 16);
		write(1, &p[c % 16], 1);
		j++;
	}
	else
	{
		write(1, &p[c % 16], 1);
		j++;
	}
	return (j);
}
