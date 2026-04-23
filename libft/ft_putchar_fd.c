/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgaadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 14:24:15 by jgaadi            #+#    #+#             */
/*   Updated: 2025/10/19 14:24:17 by jgaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int my_file_fd;
	const char *filename;

	filename = "test_1337";
	
    // O_WRONLY | O_CREAT | O_TRUNC are necessary flags for writing
	my_file_fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);

	if (my_file_fd == -1)
	{
		perror("Error opening file");
		return (EXIT_FAILURE);
	}
    
	ft_putchar_fd('a', my_file_fd);
	ft_putnbr_fd(1337, my_file_fd);

	if (close(my_file_fd) == -1)
	{
		perror("Error closing file");
		return (EXIT_FAILURE);
	}

	printf("Successfully wrote 'a1337' to file: %s\n", filename);
	printf("Check content with: cat %s\n", filename);
	
	return (0);
}*/
