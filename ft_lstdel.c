/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/28 17:27:54 by nhuber            #+#    #+#             */
/*   Updated: 2016/02/28 17:38:24 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*victim;

	while (*alst)
	{
		victim = *alst;
		*alst = (*alst)->next;
		del(victim->content, victim->content_size);
		free(victim);
	}
	*alst = NULL;
}
