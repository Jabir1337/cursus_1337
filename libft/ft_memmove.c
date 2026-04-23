/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgaadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 13:51:47 by jgaadi            #+#    #+#             */
/*   Updated: 2025/10/15 13:51:48 by jgaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*tmp_dest;
	unsigned char		*tmp_src;

	if ((!dest && !src) || n == 0)
		return (dest);
	tmp_dest = (unsigned char *)dest;
	tmp_src = (unsigned char *)src;
	if (dest > src)
	{
		while (n > 0)
		{
			n--;
			tmp_dest[n] = tmp_src[n];
		}
	}
	else
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}
/*int main()
{
	char d[5];
	char s[] = "123456";

	printf("s = %s\n", s);
	ft_memmove(d, s, 4);
	printf("d = %s\n", d);
	printf("s = %s\n", s);
}*/
