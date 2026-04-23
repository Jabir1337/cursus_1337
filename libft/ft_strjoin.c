/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgaadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 14:45:10 by jgaadi            #+#    #+#             */
/*   Updated: 2025/10/17 14:45:12 by jgaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	s = malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2)) + 1));
	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		s[i++] = s1[j++];
	}
	j = 0;
	while (s2[j])
	{
		s[i++] = s2[j++];
	}
	s[i] = '\0';
	return (s);
}
// int main(){
//
//     char    *str1 = "Hello, ";
//     char    *str2 = "1337 World";
//     char    *join;
//
//     join = ft_strjoin(str1, str2);
//     if (join != NULL)
//     {
//         printf("String 1: \"%s\"\n", str1);
//         printf("String 2: \"%s\"\n", str2);
//         printf("new String: \"%s\"\n", join);
//
//         free(join);
//     }
//     else
//     {
//         printf("malloc error\n");
//     }
//
//     return (0);
// }
