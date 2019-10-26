/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquamar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 22:29:55 by aquamar           #+#    #+#             */
/*   Updated: 2019/10/25 22:30:01 by aquamar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t len_dst;
	size_t len_src;
	size_t i;

	i = 0;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (len_dst >= size)
	{
		return (size + len_src);
	}
	else
		len_src = len_dst + len_src;
	while (src[i] != '\0' && len_dst < size - 1)
		dst[len_dst++] = src[i++];
	dst[len_dst] = '\0';
	return (len_src);
}
