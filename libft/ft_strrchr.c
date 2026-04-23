/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgaadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 14:58:53 by jgaadi            #+#    #+#             */
/*   Updated: 2025/10/16 14:58:54 by jgaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	s_len;

	s_len = ft_strlen(s);
	while (s_len > 0)
	{
		if (s[s_len] == (char)c)
			return ((char *)(&(s[s_len])));
		s_len--;
	}
	if (s[s_len] == (char)c)
		return ((char *)(&(s[s_len])));
	return (NULL);
}
/*#include <stdio.h>

int main()
{
	char s[] = "jabir";
	char *d = NULL;

	d = ft_strrchr(s, 'b' + 256);
	printf("%s\n", d);
}*/
