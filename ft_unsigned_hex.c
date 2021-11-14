/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_hex.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnidorin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:20:28 by jnidorin          #+#    #+#             */
/*   Updated: 2021/11/14 16:20:31 by jnidorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_transfer_to_16cc(unsigned long long int n, int *count, char c)
{
	if (n >= 16)
	{
		ft_transfer_to_16cc(n / 16, count, c);
		n %= 16;
	}
	if (n > 9 && n < 16)
	{
		if (c == 'x')
			ft_putchar((n % 10) + 97);
		else
			ft_putchar((n % 10) + 65);
	}
	else
		ft_putchar(n + 48);
	(*count)++;
}

void	ft_x_format(va_list ap, int *count, char c)
{
	unsigned int	num;

	num = va_arg(ap, unsigned int);
	ft_transfer_to_16cc(num, count, c);
}
