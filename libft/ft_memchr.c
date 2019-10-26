/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquamar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 22:22:48 by aquamar           #+#    #+#             */
/*   Updated: 2019/10/25 22:22:52 by aquamar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	unsigned char	*a;

	a = (unsigned char *)s;
	i = 0;
	while (n-- > 0)
	{
		if (a[i] == (unsigned char)c)
			return (&a[i]);
		i++;
	}
	return (0);
}
