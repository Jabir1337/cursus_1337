/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgaadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:56:41 by jgaadi            #+#    #+#             */
/*   Updated: 2025/10/16 15:56:43 by jgaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	if (n == 0)
		return (NULL);
	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return (&(((unsigned char *)s)[i]));
		i++;
	}
	return (NULL);
}
/*int main()
{
	int data[] = {1, 2, 3, 5};
	char *pos = ft_memchr(data, 3, sizeof(data));

	printf("%p\n", &(data[2]));
	printf("%p\n", pos);
	
}*/
