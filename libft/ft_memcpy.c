/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquamar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 22:25:20 by aquamar           #+#    #+#             */
/*   Updated: 2019/10/25 22:25:23 by aquamar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void *ret;

	ret = dst;
	if (!((unsigned char*)dst) && !((unsigned char*)src))
		return (dst);
	if (!ft_memcmp(dst, src, n))
		return (dst);
	while (n--)
	{
		*(unsigned char *)dst = *(unsigned char *)src;
		dst++;
		src++;
	}
	return (ret);
}
