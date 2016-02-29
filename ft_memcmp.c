/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/25 14:46:09 by nhuber            #+#    #+#             */
/*   Updated: 2016/02/27 19:28:33 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *cp1;
	unsigned char *cp2;

	if (s1 && s2)
	{
		cp1 = (unsigned char *)s1;
		cp2 = (unsigned char *)s2;
		while (n--)
		{
			if (*cp1 != *cp2)
				return (*cp1 - *cp2);
			cp1++;
			cp2++;
		}
	}
	return (0);
}
