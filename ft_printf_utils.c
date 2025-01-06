/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 15:29:52 by cbitca            #+#    #+#             */
/*   Updated: 2025/01/06 15:29:54 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchr(int c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		ft_putchr(*str++);
		i++;
	}
	return (i);
}

int	ft_putnbr(int n)
{
	char	*num;
	int		res;

	num = ft_itoa(n);
	res = ft_putstr(num);
	return (res);
}

int	ft_unsigned(unsigned int n)
{
	char	*num;
	int		res;

	num = ft_unsigneditoa(n);
	res = ft_putstr(num);
	return (res);
}
