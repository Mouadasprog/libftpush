/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-mah <mben-mah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:18:44 by mouad             #+#    #+#             */
/*   Updated: 2024/11/08 11:24:12 by mben-mah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*search;
	size_t			i;

	search = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (search[i] == (unsigned char)c)
			return ((unsigned char *)&search[i]);
		i++;
	}
	return (NULL);
}
