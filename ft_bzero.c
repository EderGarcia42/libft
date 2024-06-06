/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegarci <edegarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:28:16 by edegarci          #+#    #+#             */
/*   Updated: 2024/06/06 16:11:21 by edegarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*dest;
	size_t			i;

	dest = (unsigned char *)s;
	i = 0;
	while (i++ < n)
		*dest++ = 0;
}

/* int	main(void)
{
	char	str[] = "B ZERO!";
	size_t	n;

	n = 5;
	ft_bzero(str, n);
	printf("Después de bzero: %s\n", str);
	return (0);
} */
/* int	main(int argc, char **argv)
{
	void	*s;
	void	*s1;
	size_t	n;

	if (argc != 3)
	{
		printf("Error de argumentos\n");
		return (0);
	}
	s = argv[1];
	s1 = argv[1];
	n = atoi(argv[2]);
	ft_bzero(s, n);
	printf("ft_bzero%s %zu\n", s, n);
	bzero(s, n);
	printf("bzero%s %zu\n", s1, n);
	return (0);
} */