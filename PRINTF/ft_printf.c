/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamrachi <hamrachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 00:46:57 by hamrachi          #+#    #+#             */
/*   Updated: 2023/12/20 23:14:02 by hamrachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	void	ft_printer(const char fmt, va_list paramn, int *n)
{
	if (fmt == 'c')
		ft_putchar(va_arg(paramn, int), n);
	else if (fmt == 's')
		ft_putstr(va_arg(paramn, char *), n);
	else if (fmt == 'p')
	{
		ft_putchar('0', n);
		ft_putchar('x', n);
		ft_put_adress(va_arg(paramn, void *), n);
	}
	else if (fmt == 'd' || fmt == 'i')
		ft_putnbr(va_arg(paramn, int), n);
	else if (fmt == 'u')
		ft_put_unsigned(va_arg(paramn, unsigned int), n);
	else if (fmt == 'x')
		ft_puthexa_lu(va_arg(paramn, unsigned int), n, 1);
	else if (fmt == 'X')
		ft_puthexa_lu(va_arg(paramn, unsigned int), n, 2);
	else
		ft_putchar(fmt, n);
}

int	ft_printf(const char *fmt, ...)
	{
	va_list		paramn;
	int			n;

	if (write(1, "", 0) < 0)
		return (-1);
	va_start(paramn, fmt);
	n = 0;
	while (*(fmt) != '\0')
	{
		if (*fmt == '%')
		{
			if (*(fmt++))
				ft_printer(*(fmt), paramn, &n);
			else
				break ;
		}
		else
			ft_putchar(*fmt, &n);
		fmt++;
	}
	va_end(paramn);
	return (n);
}
int main ()
{
	printf("%d\n",printf("%%"));
	printf ("%d\n",ft_printf("%%"));
}