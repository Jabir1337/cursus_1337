/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgaadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 18:09:18 by jgaadi            #+#    #+#             */
/*   Updated: 2025/10/16 18:09:20 by jgaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strnstr(const char *big, const char *small, size_t n)
{
	size_t	j;
	size_t	i;

	if (*small == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] && i < n)
	{
		j = 0;
		while (big[i + j] == small[j] && (i + j < n))
		{
			j++;
			if (small[j] == '\0')
				return (&(((char *)big)[i]));
		}
		i++;
	}
	return (NULL);
}
