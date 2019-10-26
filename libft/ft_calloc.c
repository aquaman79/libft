/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquamar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 22:15:09 by aquamar           #+#    #+#             */
/*   Updated: 2019/10/26 02:28:01 by aquamar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void *new;

	new = NULL;
	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	new = malloc(count * size);
	if (!new)
		return (NULL);
	memset(new, 0, count * size);
	return (new);
}
