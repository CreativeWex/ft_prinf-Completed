/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_void_pointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnidorin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:23:17 by jnidorin          #+#    #+#             */
/*   Updated: 2021/11/14 16:28:02 by jnidorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_p_format(va_list ap, int *count)
{
	unsigned long long int	pointer;

	pointer = va_arg(ap, unsigned long long int);
	ft_putchar('0');
	ft_putchar('x');
	*count += 2;
	ft_transfer_to_16cc(pointer, count, 'x');
}
