/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamrachi <hamrachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 04:29:01 by hamrachi          #+#    #+#             */
/*   Updated: 2023/12/20 05:18:44 by hamrachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int num, int *cnt)
{
	if (num == -2147483648)
	{
		ft_putchar('-', cnt);
		ft_putchar('2', cnt);
		num = 147483648;
	}
	if (num < 0)
	{
		ft_putchar('-', cnt);
		num *= -1;
	}
	if (num > 9)
	{
		ft_putnbr(num / 10, cnt);
		ft_putchar(num % 10 + 48, cnt);
	}
	else
		ft_putchar(num % 10 + 48, cnt);
}
