/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgaadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:25:42 by jgaadi            #+#    #+#             */
/*   Updated: 2025/10/16 12:25:44 by jgaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;
	size_t	j;

	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	dst_len = ft_strlen((const char *)dst);
	if (dst_len >= size)
		return (src_len + size);
	i = 0;
	j = dst_len;
	while (src[i] && j < size - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (dst_len + src_len);
}
// int main()
// {
//     char    dst[15] = "Hello ";
//     const char *src = "World!";
//     size_t  size = 15;
//     size_t  res;
//
//     printf("dst: \"%s\"\n", dst);
//     printf("src:  \"%s\"\n", src);
//     printf("size: %zu\n\n", size);
//
//     res = ft_strlcat(dst, src, size);
//
//     printf("Final dst:   \"%s\"\n", dst);
//     printf("Return value: %zu\n", res);
//
//     return (0);
// }