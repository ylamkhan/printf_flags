/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamkhan <ylamkhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 22:55:37 by ylamkhan          #+#    #+#             */
/*   Updated: 2023/03/16 03:50:54 by ylamkhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bouns.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
