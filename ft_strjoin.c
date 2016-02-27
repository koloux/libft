/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/26 09:54:19 by nhuber            #+#    #+#             */
/*   Updated: 2016/02/26 10:52:16 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len1;
	size_t	len2;

	if (!s1 && !s2)
		return (NULL);
	(s1 == NULL) ? (len1 = 0) : (len1 = ft_strlen(s1));
	(s2 == NULL) ? (len2 = 0) : (len2 = ft_strlen(s2));
	if ((str = ft_strnew(len1 + ft_strlen(s2) + 1)) == NULL)
		return (NULL);
	(len1 == 0) ? str : ft_strcpy(str, s1);
	(len2 == 0) ? str : ft_strcpy((str + len1), s2);
	return (str);
}
