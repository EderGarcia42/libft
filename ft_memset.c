/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegarci <edegarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 11:29:29 by edegarci          #+#    #+#             */
/*   Updated: 2024/06/06 15:49:45 by edegarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}

/* int	main(void)
{
	char	str[] = "MEMSET";
	int		c;
	size_t	len;

	c = 'A';
	len = 5;
	ft_memset(str, c, len);
	printf("Después de memset: %s\n", str);
	return (0);
} */
/* int	main(int argc, char **argv)
{
	char	*b;
	char	*c;
	int		i;
	size_t	len;

	if (argc != 3)
	{
		printf("Error de argumentos\n");
		return (0);
	}
	b = argv[1];
	c = argv[2];
	i = atoi(c);
	len = strlen(b);
	ft_memset(b, i, len);
	printf("ft_memset %s %zu\n", b, len);
	memset(b, i, len);
	printf("memset %s %zu\n", b, len);
	return (0);
} */