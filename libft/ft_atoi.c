/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-mah <mben-mah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 09:41:26 by mouad             #+#    #+#             */
/*   Updated: 2024/11/10 11:18:05 by mben-mah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned long long	number;
	int					index;
	int					sign;

	index = 0;
	number = 0;
	sign = 1;
	while ((str[index] >= 9 && str[index] <= 13) || str[index] == ' ')
		index++;
	if (str[index] == '-' || str[index] == '+')
		if (str[index++] == '-')
			sign = -1;
	while (ft_isdigit(str[index]))
		number = number * 10 + str[index++] - '0';
	return ((int)(number * sign));
}
