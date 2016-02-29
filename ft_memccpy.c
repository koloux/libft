/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/24 21:02:23 by nhuber            #+#    #+#             */
/*   Updated: 2016/02/29 08:58:34 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*str;
	size_t	len;

	if (src && dst && n)
	{
		if ((str = ft_strchr(src, c)) == NULL)
			ft_memcpy(dst, src, n);
		else
		{
			len = ft_strlen((const char *)src) - ft_strlen((const char *)str);
			ft_memcpy(dst, src, len);
			return (dst + len + 1);
		}
	}
	return (NULL);
}
