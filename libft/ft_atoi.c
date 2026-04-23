/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgaadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 23:24:30 by jgaadi            #+#    #+#             */
/*   Updated: 2025/10/16 23:24:32 by jgaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_space(int c)
{
	return (c == '\f' || c == '\n' || c == '\r'
		|| c == '\t' || c == '\v' || c == ' ');
}

int	ft_atoi(const char *nptr)
{
	int		sign;
	long	result;

	while (check_space(*nptr))
		nptr++;
	sign = 1;
	result = 0;
	if (*nptr == '-')
	{
		sign = -sign;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while (ft_isdigit(*nptr))
	{
		result = result * 10 + (*nptr - '0');
		if (result < 0)
			return (-sign * (sign == 1));
		nptr++;
	}
	return (result * sign);
}
// #include <stdio.h>
// #include <limits.h>
//
//
// int main()
// {
//	
// 	int a = ft_atoi("-2147483648");
// 	int b = atoi("-2147483648");
//
// 	printf("a = %d\nb = %d", a, b);
// 	return (0);
// }
