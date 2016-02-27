/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/24 09:42:17 by nhuber            #+#    #+#             */
/*   Updated: 2016/02/26 11:31:59 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!little)
		return ((char *)big);
	while (big[i])
	{
		j = 0;
		while (little[j] == big[i] && little[j])
		{
			i++;
			j++;
		}
		if (j == ft_strlen(little))
			return ((char *)&big[i - j]);
		i++;
	}
	return (NULL);
}
