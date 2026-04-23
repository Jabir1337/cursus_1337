/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgaadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 14:34:05 by jgaadi            #+#    #+#             */
/*   Updated: 2025/10/16 14:34:07 by jgaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)(&(s[i])));
		i++;
	}
	if ((char)c == '\0')
		return ((char *)(&(s[i])));
	return (NULL);
}
// int main()
// {
// 	char s[] = "jabirtgaadi";
// 	char *d = NULL;
//	
// 	d = ft_strchr(s, 't' + 256);
// 	printf("%s\n", d);
// }
