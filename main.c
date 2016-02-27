/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/26 17:51:13 by nhuber            #+#    #+#             */
/*   Updated: 2016/02/27 17:48:28 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char	buf[] = "Ceci n'est pas une pipe.";
static char	buf2[] = "ozarabozaraboze";

int main()
{
	printf("mine : %s\n", ft_strstr(buf2, "ozaraboze"));
	printf("true : %s\n", strstr(buf, "ozaraboze"));
	printf("mine : %s\n", ft_strstr("", ""));
	printf("true : %s\n", strstr("", ""));
	printf("mine : %s\n", ft_strstr("J'ai fait pipapipapou en LV2", "pipapou"));
	printf("true : %s\n", strstr("J'ai fait pipapipapou en LV2", "pipapou"));
	return (0);
}
