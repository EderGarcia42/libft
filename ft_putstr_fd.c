/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegarci <edegarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 14:28:11 by edegarci          #+#    #+#             */
/*   Updated: 2024/06/06 16:09:44 by edegarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s == NULL)
		return ((void) NULL);
	while (*s)
		write(fd, s++, 1);
}

/* int main(void)
{
	char	*s;
	int		i;

	i = 1;
	s = "Hola mundo";
	ft_putstr_fd(s, i);
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
	ft_putstr_fd(s, i);
	return (0);
} */