/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_adress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamrachi <hamrachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 05:12:06 by hamrachi          #+#    #+#             */
/*   Updated: 2023/12/20 05:13:51 by hamrachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_adress(void *p, int *cnt)
	{
	unsigned long	num;
	char			*bas;

	bas = "0123456789abcdef";
	num = (unsigned long)p;
	if (num < 16)
		ft_putchar(bas[num], cnt);
	else
	{
		ft_put_adress((void *)(num / 16), cnt);
		ft_put_adress((void *)(num % 16), cnt);
	}
}
