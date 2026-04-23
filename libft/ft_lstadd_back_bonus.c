/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgaadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:42:22 by jgaadi            #+#    #+#             */
/*   Updated: 2025/10/21 11:42:23 by jgaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *node)
{
	t_list	*tmp;

	if (!lst || !node)
		return ;
	if (!*lst)
		*lst = node;
	else
	{
		tmp = ft_lstlast(*lst);
		tmp->next = node;
	}
}
