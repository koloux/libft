/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/28 17:46:19 by nhuber            #+#    #+#             */
/*   Updated: 2016/02/29 14:45:11 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*tmp;
	t_list	*tmp2;
	t_list	*head;
	
	if (!lst || !f)
		return (NULL);
	tmp2 = f(lst);
	while ((head = ft_lstnew(tmp2->content, tmp2->content_size)))
	{
		tmp = head;
		lst = lst->next;
		if (!(tmp->next = ft_lstnew(tmp2->content, tmp2->content_size)))
			return (NULL);
		tmp = tmp->next;
		lst = lst->next;
	}
	return (head);
}
