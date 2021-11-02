/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnidorin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:41:07 by jnidorin          #+#    #+#             */
/*   Updated: 2021/10/19 17:25:56 by jnidorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

char	*ft_strdup(const char *s1)
{
	char	*p;
	int		length;

	length = ft_strlen(s1);
	p = (char *) malloc(length + 1);
	if (p == NULL)
		return (NULL);
	ft_memcpy(p, s1, length);
	p[length] = '\0';
	return (p);
}
