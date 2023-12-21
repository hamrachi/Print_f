/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamrachi <hamrachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 04:56:34 by hamrachi          #+#    #+#             */
/*   Updated: 2023/12/20 05:14:36 by hamrachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_unsigned(unsigned int num, int *cnt)
{
	if (num > 9)
	{
		ft_put_unsigned(num / 10, cnt);
		ft_putchar(num % 10 + 48, cnt);
	}
	else
		ft_putchar(num % 10 + 48, cnt);
}
