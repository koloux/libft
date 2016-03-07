/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bitgetfour.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/06 13:48:28 by nhuber            #+#    #+#             */
/*   Updated: 2016/03/07 13:32:33 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_bitgetfour(unsigned int i, unsigned int index)
{
	return (i >> index * 4) & (15);
}
