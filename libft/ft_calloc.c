/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgaadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:20:37 by jgaadi            #+#    #+#             */
/*   Updated: 2025/10/17 11:20:55 by jgaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t	nmemb, size_t	size)
{
	void	*ptr;

	if (nmemb != 0 && size > SIZE_MAX / nmemb)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, (nmemb * size));
	return (ptr);
}
// #include <stdio.h>
// #include <stdlib.h>
//
// int main()
// {
//     int     *arr;
//     size_t  count = 10;
//     size_t  size = sizeof(int);
//  
//     arr = (int *)ft_calloc(count, size);
//
//     if (arr == NULL)
//     {
//         printf("Allocation failed!\n");
//         return (1);
//     }
//
//     printf("ft_calloc allocated memory for %zu integers.\n", count);
//
//     for (size_t i = 0; i < 5; i++)
//     {
//         printf("Element[%zu]: %d\n", i, arr[i]);
//     }
//     free(arr);
//     return (0);
// }
