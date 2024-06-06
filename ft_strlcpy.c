/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegarci <edegarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:46:57 by edegarci          #+#    #+#             */
/*   Updated: 2024/06/06 15:59:53 by edegarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
	{
		return (ft_strlen(src));
	}
	while (src[i] != '\0' && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

/* int	main(void)
{
	const char	*original = "EJERCICIO STRLCPY";
	char		copia[10];

	ft_strlcpy(copia, original, sizeof(copia));
	printf("Original: %s\n", original);
	printf("Copiado: %s\n", copia);
	return (0);
} */
/* int	main(int argc, char **argv)
{
	char	*dst;
	char	*src;
	char	*dst1;
	size_t	dstsize;
	size_t	i;

	if (argc != 3)
	{
		printf("Error de argumentos\n");
		return (0);
	}
	dst = argv[1];
	dst1 = argv[1];
	src = argv[2];
	dstsize = ft_strlen(dst);
	i = ft_strlcpy(dst, src, dstsize);
	printf("ft_strlcpy %s %zu\n", dst, i);
	i = strlcpy(dst, src, dstsize);
	printf("strlcpy %s %zu\n", dst1, i);
	return (0);
} */