/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/05 15:22:49 by nhuber            #+#    #+#             */
/*   Updated: 2016/04/05 16:12:51 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static size_t	nblen(int value, int base)
{
	size_t	size;

	size = 0;
	while (value != 0)
	{
		value /= base;
		size++;
	}
	return (size);
}

static char	hex(int nb)
{
	if (nb < 10)
		return (nb + '0');
	nb %= 10;
	return ('a' + nb);
}

char	*ft_itoa_base(int value, int base)
{
	char	*res;
	int	flag;
	size_t	size;
	int	i;

	if (value == 0)
		return (ft_strdup("0"));
	else if (value == -2147483648)
		return (ft_strdup("-2147483648")); 
	else
	{
		flag = (value < 0) ? 1 : 0;
		size = nblen(value, base);
		if(!(res = (char *)ft_memalloc(size + flag + 1)))
			return (NULL);
		i = (int)size + flag;
		while (value != 0)
		{
			res[i] = hex(value % 10);
			value /= base;
		}
		res[i] = (flag == 1) ? '-' : res[i];
		res[size] = '\0';
	}
	return (res);
}
#include <stdio.h>
int main(void)
{
	printf("%s\n", ft_itoa_base(24, 16));
	return (0);
}
