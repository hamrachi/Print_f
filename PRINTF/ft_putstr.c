/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamrachi <hamrachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 02:58:49 by hamrachi          #+#    #+#             */
/*   Updated: 2023/12/20 22:46:11 by hamrachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(const char *str, int *cnt)
{
	size_t	i;

	i = 0;
	if (str == NULL)
		ft_putstr("(null)", cnt);
	else
	{
		while (str[i])
		{
			ft_putchar(str[i], cnt);
			i++;
		}
	}
}
 