/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 09:58:24 by mouad             #+#    #+#             */
/*   Updated: 2024/11/09 09:59:50 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	length_dest;
	size_t	length_src;

	length_dest = ft_strlen(dest);
	length_src = ft_strlen(src);
	if (size <= length_dest)
		return (length_src + size);
	i = 0;
	while (src[i] && length_dest + i < size - 1)
	{
		dest[length_dest + i] = src[i];
		i++;
	}
	dest[length_dest + i] = '\0';
	return (length_dest + length_src);
}
