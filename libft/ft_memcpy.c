/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-mah <mben-mah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 09:48:15 by mouad             #+#    #+#             */
/*   Updated: 2024/11/09 11:07:13 by mben-mah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*d;
	int		i;
	char	*s;

	if (dst == src)
		return (dst);
	d = (char *)dst;
	s = (char *)src;
	i = 0;
	while ((dst || src) && (size_t)i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
