/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnumbre.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamkhan <ylamkhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 22:55:37 by ylamkhan          #+#    #+#             */
/*   Updated: 2023/01/19 03:29:55 by ylamkhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnumbre(int c)
{
	long	i;
	int		j;

	j = 0;
	i = (long)c;
	if (i < 0)
	{
		write(1, "-", 1);
		i = (-1) * i;
		j++;
	}
	if (i >= 10)
	{
		j += ft_putnumbre(i / 10);
		ft_putchar(i % 10 + 48);
		j++;
	}
	else
	{
		ft_putchar(i % 10 + 48);
		j++;
	}
	return (j);
}
