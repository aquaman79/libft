/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquamar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 22:22:33 by aquamar           #+#    #+#             */
/*   Updated: 2019/10/26 02:11:49 by aquamar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *d;
	unsigned char *s;
	unsigned char cc;

	d = dst;
	s = (unsigned char *)src;
	cc = (unsigned char)c;
	while (n--)
	{
		*(d++) = *(s);
		if (*s++ == cc)
			return (d);
	}
	return (0);
}
