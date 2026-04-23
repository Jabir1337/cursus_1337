/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgaadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 10:52:46 by jgaadi            #+#    #+#             */
/*   Updated: 2025/10/22 10:52:47 by jgaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*content;

	if (!lst || !f || !del)
		return (NULL);
	new = NULL;
	content = NULL;
	while (lst != NULL)
	{
		content = ft_lstnew(f(lst->content));
		if (!content)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, content);
		lst = lst->next;
	}
	return (new);
}
