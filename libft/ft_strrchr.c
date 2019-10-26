/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquamar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 22:34:07 by aquamar           #+#    #+#             */
/*   Updated: 2019/10/25 22:34:12 by aquamar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int n)
{
	char *last;

	last = NULL;
	if (*s == '\0' && n == '\0')
		return ((char *)s);
	if (*s == '\0' || !s)
		return (NULL);
	while (*s)
	{
		if (*s == n)
			last = (char *)s;
		s++;
	}
	if ((char)n == '\0')
		return (char *)s;
	else
		return (last);
}
