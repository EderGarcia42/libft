/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegarci <edegarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 11:56:33 by edegarci          #+#    #+#             */
/*   Updated: 2024/06/10 15:40:21 by edegarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void const *s1, void const *s2, size_t n)
{
	const unsigned char	*ptr_s1;
	const unsigned char	*ptr_s2;

	ptr_s1 = s1;
	ptr_s2 = s2;
	while (n--)
	{
		if (*ptr_s1 != *ptr_s2)
			return ((int)(*ptr_s1 - *ptr_s2));
		ptr_s1++;
		ptr_s2++;
	}
	return (0);
}

/* int	main(void)
{
	char	s1[] = "ABC";
	char	s2[] = "ABC";
	size_t	len;

	len = 3;
	printf("%d\n", ft_memcmp(s1, s2, len));
	return (0);
} */
/* int	main(int argc, char **argv)
{
	char	*s1;
	char	*s2;
	size_t	len;
	int		i;

	if (argc != 3)
	{
		printf("Error de argumentos\n");
		return (0);
	}
	s1 = argv[1];
	s2 = argv[2];
	len = ft_strlen(s1);
	i = ft_memcmp(s1, s2, len);
	printf("ft_memcmp %s %s %zu %d\n", s1, s2, len, i);
	i = memcmp(s1, s2, len);
	printf("memcmp %s %s %zu %d\n", s1, s2, len, i);
	return (0);
} */