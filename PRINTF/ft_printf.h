/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamrachi <hamrachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 00:41:57 by hamrachi          #+#    #+#             */
/*   Updated: 2023/12/20 22:48:14 by hamrachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(const char *fmt,	...);
void	ft_putchar(int c, int *cnt);
void	ft_putstr(const char *str, int *cnt);
void	ft_putnbr(int num, int *cnt);
void	ft_put_unsigned(unsigned int num, int *cnt);
void	ft_put_adress(void *p, int *cnt);
void	ft_puthexa_lu(unsigned int n, int *cnt, int type);
#endif
