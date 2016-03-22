/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstremoveif.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/20 14:26:48 by nhuber            #+#    #+#             */
/*   Updated: 2016/03/22 10:03:58 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstremoveif(t_list *head, void *data_ref)
{
	t_list	*tmp;
	t_list	*victim;

	tmp = head;
	while (tmp)
	{
		if (ft_memcmp(head->content, data_ref, head->content_size) == 0)
		{
			victim->next = tmp->next;
			free(tmp);
			tmp = victim;
		}
		else
			victim = tmp;
		tmp = tmp->next;
	}
}
