/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegarci <edegarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 12:00:53 by edegarci          #+#    #+#             */
/*   Updated: 2024/06/06 15:48:55 by edegarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dest, void const *src, size_t n)
{
	void	*dest_ptr;

	dest_ptr = dest;
	if (!dest && !src)
		return (dest);
	while (n--)
		*(char *)dest++ = *(char *)src++;
	return (dest_ptr);
}

/* int	main(void)
{
	char	dest[] = "MEMCPY";
	char	src[] = "FT";
	size_t	len;

	len = 2;
	ft_memcpy(dest, src, len);
	printf("Después de memcpy: %s\n", dest);
	return (0);
} */
/* int	main(int argc, char **argv)
{
	char	*dest;
	char	*src;
	int		i;
	size_t	len;

	if (argc != 3)
	{
		printf("Error de argumentos\n");
		return (0);
	}
	dest = argv[1];
	src = argv[2];
	i = atoi(src);
	len = strlen(dest);
	ft_memcpy(dest, src, len);
	printf("ft_memcpy %s %zu\n", dest, len);
	memcpy(dest, src, len);
	printf("memcpy %s %zu\n", dest, len);
	return (0);
} */