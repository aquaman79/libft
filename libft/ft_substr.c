/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquamar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 22:41:10 by aquamar           #+#    #+#             */
/*   Updated: 2019/10/25 22:41:15 by aquamar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	int		i;
	char	*new;

	i = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) < (size_t)start)
		len = 0;
	new = (char *)ft_calloc((size_t)(len + 1), sizeof(char));
	if (!new)
		return (NULL);
	while (len--)
	{
		new[i] = *(s + start);
		start++;
		i++;
	}
	new[i] = '\0';
	return (new);
}
