/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegarci <edegarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 14:28:09 by edegarci          #+#    #+#             */
/*   Updated: 2024/06/12 12:19:15 by edegarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*s;

	s = "0123456789";
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	write(fd, &s[n % 10], 1);
}

/* int main(void)
{
	int	n;
	int	i;

	i = 1;
	n = 42;
	ft_putnbr_fd(n, i);
	return (0);
} */
/* Argumentos */
/* int main(int argc, char **argv)
{
	int	n;
	int	i;

	if (argc != 3)
	{
		printf("Error de argumentos\n");
		return (0);
	}
	i = ft_atoi(argv[2]);
	n = ft_atoi(argv[1]);
	ft_putnbr_fd(n, i);
	return (0);
} */