/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgaadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 11:41:15 by jgaadi            #+#    #+#             */
/*   Updated: 2025/10/16 11:41:16 by jgaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	i = 0;
	while ((i < size - 1) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}
// #include <bsd/string.h>
// int main()
// {
//     char    src[] = "jabir";
//    
//     size_t  size = 10; 
//  
//     char    *ft_dest = (char *)malloc(size);
//     char    *dest = (char *)malloc(size);
//
//     if (!ft_dest || !dest)
//     {
//         fprintf(stderr, "Memory allocation failed!\n");
//         return (1);
//     }
//
//     size_t  ft_len = ft_strlcpy(ft_dest, src, size);
//     size_t  len = strlcpy(dest, src, size);
//
//     printf("ft_dest : \"%s\" (Return: %zu)\n", ft_dest, ft_len);
//     printf("dest    : \"%s\" (Return: %zu)\n", dest, len);
//    
//     free(ft_dest);
//     free(dest);
//    
//     return (0);
// }