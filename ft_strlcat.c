/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegarci <edegarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 15:40:48 by edegarci          #+#    #+#             */
/*   Updated: 2024/06/12 12:19:20 by edegarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < dstsize && dst[i])
		i++;
	while ((i + j + 1) < dstsize && src[j])
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i != dstsize)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

/* int	main(void)
{
	char	dst[20] = "Prueba";
	char	src[20] = "Strlcat";
	size_t	dstsize = 20;
	size_t	i = ft_strlcat(dst, src, dstsize);
	printf("%s\n", dst);
	printf("%zu\n", i);
	return (0);
} */