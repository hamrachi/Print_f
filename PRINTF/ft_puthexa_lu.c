/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_lu.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamrachi <hamrachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 00:32:49 by hamrachi          #+#    #+#             */
/*   Updated: 2023/12/20 05:17:41 by hamrachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexa_lu(unsigned int n, int *cnt, int type)
{
	char	*l;
	char	*u;

	l = "0123456789abcdef";
	u = "0123456789ABCDEF";
	if (n < 16)
	{
		if (type == 1)
			ft_putchar(l[n], cnt);
		if (type == 2)
			ft_putchar(u[n], cnt);
	}
	else
	{
		ft_puthexa_lu((n / 16), cnt, type);
		ft_puthexa_lu((n % 16), cnt, type);
	}
}
