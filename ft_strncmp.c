/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegarci <edegarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 13:09:18 by edegarci          #+#    #+#             */
/*   Updated: 2024/06/12 12:19:23 by edegarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (*s1 && *s2 && *s1 == *s2 && n > 1)
	{
		s1++;
		s2++;
		n--;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

/* int	main(void)
{
	char	*s1;
	char	*s2;
	int		n;

	s1 = "ABCDE";
	s2 = "ABCDEF";
	n = 5;
	printf("%d\n", ft_strncmp(s1, s2, n));
	return (0);
} */
/* int	main(int argc, char **argv)
{
	char	*s1;
	char	*s2;
	size_t	len;
	size_t	i;

	if (argc != 3)
	{
		printf("Error de argumentos\n");
		return (0);
	}
	s1 = argv[1];
	s2 = argv[2];
	len = ft_strlen(s1);
	i = ft_strncmp(s1, s2, len);
	printf("ft_strncmp %s %s %zu\n", s1, s2, i);
	i = strncmp(s1, s2, len);
	printf("strncmp %s %s %zu\n", s1, s2, i);
	return (0);
} */