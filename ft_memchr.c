/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegarci <edegarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 11:56:30 by edegarci          #+#    #+#             */
/*   Updated: 2024/06/12 12:19:09 by edegarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	char	uc;
	size_t	i;

	str = (char *)s;
	uc = (char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == uc)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

/* int	main(void)
{
	char	*str;
	int		c;
	size_t	len;

	str = "MEMCHR";
	c = 'C';
	len = 6;
	printf("%s\n", ft_memchr(str, c, len));
	return (0);
} */
/* int	main(int argc, char **argv)
{
	char	*s;
	char	*c;
	size_t	len;

	if (argc != 3)
	{
		printf("Error de argumentos\n");
		return (0);
	}
	s = argv[1];
	c = argv[2];
	len = ft_strlen(s);
	printf("ft_memchr %s %s %zu\n", s, c, len);
	printf("%s\n", ft_memchr(s, *c, len));
	printf("memchr %s %s %zu\n", s, c, len);
	printf("%s\n", memchr(s, *c, len));
	return (0);
} */