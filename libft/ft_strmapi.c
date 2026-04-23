/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgaadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 13:07:09 by jgaadi            #+#    #+#             */
/*   Updated: 2025/10/19 13:07:11 by jgaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	copy_past(char *dst, char const *src, char (*f)(unsigned int, char),
					unsigned int len)
{
	unsigned int	i;

	i = 0;
	while (i < len)
	{
		dst[i] = f(i, src[i]);
		i++;
	}
	dst[i] = '\0';
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	s_len;
	char			*new;

	if (!s || !f)
		return (NULL);
	s_len = ft_strlen(s);
	new = malloc(sizeof(char) * (s_len + 1));
	if (!new)
		return (NULL);
	return (copy_past(new, s, f, s_len), new);
}
