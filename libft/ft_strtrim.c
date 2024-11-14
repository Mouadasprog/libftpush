/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-mah <mben-mah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 09:41:40 by mouad             #+#    #+#             */
/*   Updated: 2024/11/10 10:49:44 by mben-mah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		new_length;
	char	*trimmed;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	new_length = end - start + 1;
	if (new_length <= 0)
		return (ft_strdup(""));
	trimmed = (char *)malloc(new_length + 1);
	if (!trimmed)
		return (NULL);
	ft_strlcpy(trimmed, s1 + start, new_length + 1);
	return (trimmed);
}
