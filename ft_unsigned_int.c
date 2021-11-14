/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnidorin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:21:31 by jnidorin          #+#    #+#             */
/*   Updated: 2021/11/14 16:21:44 by jnidorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_display_unsigned(unsigned int n, int *count)
{
	if (n >= 10)
	{
		ft_display_unsigned(n / 10, count);
		n %= 10;
	}
	if (n < 10)
	{
		ft_putchar(n + 48);
		(*count)++;
	}
}

void	ft_u_format(va_list ap, int *count)
{
	unsigned int	num;

	num = va_arg(ap, unsigned int);
	ft_display_unsigned(num, count);
}
