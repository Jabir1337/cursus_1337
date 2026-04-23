/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgaadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 12:13:08 by jgaadi            #+#    #+#             */
/*   Updated: 2025/10/19 12:13:11 by jgaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	calcul_num(long nb)
{
	size_t	i;

	i = 0;
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

static void	copy_num(long nb, char *str, size_t index, size_t size)
{
	str[size--] = '\0';
	while (index < size)
	{
		str[size] = (nb % 10) + '0';
		nb /= 10;
		size--;
	}
	str[size] = nb + '0';
}

char	*ft_itoa(int n)
{
	long	nb;
	char	*itoa;
	size_t	size;
	size_t	i;

	size = 0;
	nb = n;
	if (nb == 0)
		return (ft_strdup("0"));
	if (nb < 0)
	{
		nb = -nb;
		size++;
	}
	size += calcul_num(nb);
	itoa = malloc(sizeof(char) * (size + 1));
	if (!itoa)
		return (NULL);
	i = 0;
	if (n < 0)
		itoa[i++] = '-';
	return (copy_num(nb, itoa, i, size), itoa);
}
// #include <stdio.h>
// int main(void)
// {
//     printf("%s\n", ft_itoa(42));
//     printf("%s\n", ft_itoa(0));
//     printf("%s\n", ft_itoa(-12345));
//     printf("%s\n", ft_itoa(2147483647));
//     return (0);
// }