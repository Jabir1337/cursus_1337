/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgaadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 15:12:24 by jgaadi            #+#    #+#             */
/*   Updated: 2025/10/17 15:12:26 by jgaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char const x, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == x)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size;
	char	*res;

	if (!s1 || !set)
		return (NULL);
	while (s1 && check(*s1, set))
		s1++;
	size = ft_strlen(s1);
	while (size > 0 && check(s1[size - 1], set))
		size--;
	if (size == 0)
		return (ft_strdup(""));
	res = malloc(sizeof(char) * (size + 1));
	if (!res)
		return (NULL);
	ft_strlcpy(res, s1, (size) + 1);
	return (res);
}
