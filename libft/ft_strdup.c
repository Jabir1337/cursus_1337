/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgaadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:09:42 by jgaadi            #+#    #+#             */
/*   Updated: 2025/10/17 11:09:44 by jgaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*copy;
	size_t	s_len;
	size_t	i;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	copy = (char *)malloc(sizeof(char) * (s_len + 1));
	if (!copy)
		return (NULL);
	i = 0;
	while (i < s_len)
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
// int main(void)
// {
//     const char  *string = "jabir";
//     char        *duplicate;
// 	char		*original;
//
//     duplicate = ft_strdup(string);
// 	original = strdup(string);
//     if (original != NULL && duplicate != NULL)
//     {
//         printf("dyali: %s\n", duplicate);
// 		printf("dyalo: %s\n", original);
//         free(original);
// 		free(duplicate);
//     }
//     else
//     {
//         printf("ft_strdup failed to allocate memory.\n");
//     }
//
//     return (0);
// }