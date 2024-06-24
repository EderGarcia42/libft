/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegarci <edegarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 11:56:36 by edegarci          #+#    #+#             */
/*   Updated: 2024/06/12 12:19:11 by edegarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dst_ptr;
	const char	*src_ptr;

	dst_ptr = (char *)dst;
	src_ptr = (const char *)src;
	if (!dst && !src)
		return (NULL);
	if (src_ptr < dst_ptr)
		while (len-- > 0)
			dst_ptr[len] = src_ptr[len];
	else
		while (len-- > 0)
			*dst_ptr++ = *src_ptr++;
	return (dst);
}

/* int main(void)
{
	char	src[] = "Origen";
	char	dst[] = "Destino";
	size_t	len;

	len = sizeof(src);
	printf("Antes\n");
	printf("src: %s\n", src);
	printf("dst: %s\n", dst);
	ft_memmove(dst, src, len);
	printf("Despues\n");
	printf("src: %s\n", src);
	printf("dst: %s\n", dst);
	return (0);
} */
/* int	main(int argc, char **argv)
{
	char	*dst;
	char	*src;
	size_t	len;

	if (argc != 3)
	{
		printf("Error de argumentos\n");
		return (0);
	}
	dst = argv[1];
	src = argv[2];
	len = ft_strlen(src);
	printf("Antes\n");
	printf("src: %s\n", src);
	printf("dst: %s\n", dst);
	ft_memmove(dst, src, len);
	printf("Después\n");
	printf("src: %s\n", src);
	printf("dst: %s\n", dst);
	return (0);
} */