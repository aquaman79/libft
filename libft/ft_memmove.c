/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquamar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 22:25:57 by aquamar           #+#    #+#             */
/*   Updated: 2019/10/25 22:26:04 by aquamar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	void *ret;

	ret = dst;
	if (dst == src)
	{
		return (dst);
	}
	else if (src < dst && dst < src + n)
	{
		dst += n;
		src += n;
		while (n--)
			*(unsigned char *)(--dst) = *(unsigned char *)(--src);
		return (ret);
	}
	else
	{
		while (n--)
			*(unsigned char *)(dst++) = *(unsigned char *)(src++);
		return (ret);
	}
}
