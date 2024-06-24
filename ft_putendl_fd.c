/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegarci <edegarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 14:28:05 by edegarci          #+#    #+#             */
/*   Updated: 2024/06/12 12:19:14 by edegarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s == NULL)
		return ((void) NULL);
	while (*s)
		write(fd, s++, 1);
	write(fd, "\n", 1);
}

/* int main(void)
{
	char	*s;
	int		i;

	i = 1;
	s = "Hola mundo";
	ft_putendl_fd(s, i);
	return (0);
} */
/* Argumentos */
/* int main(int argc, char **argv)
{
	char	*s;
	int		i;

	if (argc != 3)
	{
		printf("Error de argumentos\n");
		return (0);
	}
	i = ft_atoi(argv[2]);
	s = argv[1];
	ft_putendl_fd(s, i);
	return (0);
} */