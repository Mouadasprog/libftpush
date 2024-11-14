/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-mah <mben-mah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:28:58 by mouad             #+#    #+#             */
/*   Updated: 2024/11/09 11:05:35 by mben-mah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;
	int		i;

	if (dst < src)
		return (ft_memcpy(dst, src, len));
	if ((dst || src) && dst > src)
	{
		d = (char *)dst;
		s = (char *)src;
		i = len;
		while (--i >= 0)
			d[i] = s[i];
	}
	return (dst);
}
