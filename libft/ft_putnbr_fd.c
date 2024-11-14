/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:15:10 by mouad             #+#    #+#             */
/*   Updated: 2024/11/11 12:20:00 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char			str[12];
	unsigned int	num;
	int				i;

	if (n < 0)
	{
		write(fd, "-", 1);
		num = -n;
	}
	else
		num = n;
	i = 0;
	if (num == 0)
		str[i++] = '0';
	while (num > 0)
	{
		str[i++] = num % 10 + '0';
		num /= 10;
	}
	while (--i >= 0)
		write(fd, &str[i], 1);
}
