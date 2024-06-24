/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegarci <edegarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 14:27:00 by edegarci          #+#    #+#             */
/*   Updated: 2024/06/12 12:19:13 by edegarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/* int main(void)
{
	char	c;
	int		i;

	i = 1;
	c = 'x';
	ft_putchar_fd(c, i);
	return (0);
} */
/* Argumentos */
/* int main(int argc, char **argv)
{
	char	c;
	int		i;

	if (argc != 3)
	{
		printf("Error de argumentos\n");
		return (0);
	}
	i = ft_atoi(argv[2]);
	c = argv[1][0];
	ft_putchar_fd(c, i);
	return (0);
} */