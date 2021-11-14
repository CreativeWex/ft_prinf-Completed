/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_integer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnidorin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:07:39 by jnidorin          #+#    #+#             */
/*   Updated: 2021/11/14 16:07:59 by jnidorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n)
{
	if (n == -2147483648)
		ft_putstr("-2147483648");
	else if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr(-n);
	}
	else if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
	else
		ft_putchar(n + '0');
}

int	ft_numlen(int num)
{
	int	len;

	len = 0;
	if (num == -2147483648)
		return (11);
	else if (num == 0)
		return (1);
	else if (num < 0)
	{
		len++;
		num *= -1;
	}
	while (num > 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

void	ft_int_format(va_list ap, int *count)
{
	int	num;

	num = va_arg(ap, int);
	ft_putnbr(num);
	*count += ft_numlen(num);
}
