/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/26 17:27:10 by nhuber            #+#    #+#             */
/*   Updated: 2016/02/26 17:49:30 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_str(char const *s, char c)
{
	size_t		count;
	unsigned int	i;

	count = 1;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count);
}

static size_t	length_str(char const *s, char c)
{

}

char		**ft_strsplit(char const *s, char c)
{
	char	**str;
		
	if (!(str = (char **)malloc(sizeof(char *) * count_str(s, c))))
		return (NULL);
	while (s)
	{
		
	}
}
