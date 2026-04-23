/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgaadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 18:37:41 by jgaadi            #+#    #+#             */
/*   Updated: 2025/10/17 18:37:43 by jgaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	calcul_words(char const *s, char c)
{
	size_t	count;
	int		num;

	count = 0;
	num = 0;
	while (*s)
	{
		if (num && (*s == c))
		{
			num = 0;
			count++;
		}
		else if (*s != c)
			num = 1;
		s++;
	}
	if (num)
		count++;
	return (count);
}

static int	char_len(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && (s[i] != c))
		i++;
	return (i);
}

static char	*cat_word(char const *s, size_t len)
{
	char	*new;

	new = malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	ft_strlcpy(new, s, len + 1);
	return (new);
}

static void	free_split(char ***split, size_t i)
{
	size_t	n;

	n = 0;
	while (n < i)
	{
		free((*split)[n]);
		n++;
	}
	free(*split);
}

char	**ft_split(char const *s, char c)
{
	size_t	len_words;
	char	**split;
	size_t	i;
	size_t	len;

	if (!s)
		return (NULL);
	len_words = calcul_words(s, c);
	split = malloc (sizeof(char *) * (len_words + 1));
	if (!split)
		return (NULL);
	i = 0;
	while (i < len_words)
	{
		while (*s == c)
			s++;
		len = char_len(s, c);
		split[i] = cat_word(s, len);
		if (!split[i])
			return (free_split(&split, i), NULL);
		s += len;
		i++;
	}
	split[i] = NULL;
	return (split);
}
// int main()
// {
//     char    **result;
//     char    *s = "  hello-world-42-end  ";
//     char    c = '-';
//     int     i;
//
//     result = ft_split(s, c);
//
//     if (result)
//     {
//         i = 0;
//         while (result[i] != NULL)
//         {
//             printf("Word %d: \"%s\"\n", i, result[i]);
//             free(result[i]); 
//             i++;
//         }
//         free(result);
//     }
//     else
//     {
//         printf("ft_split returned NULL.\n");
//     }
//
//     return (0);
// }
