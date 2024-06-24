/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegarci <edegarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 12:10:33 by edegarci          #+#    #+#             */
/*   Updated: 2024/06/24 14:01:21 by edegarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

/* int	main(void)
{
	char	*str;

	str = "Let's go!";
	printf("El número de carácteres es: %zu\n", ft_strlen(str));
	return (0);
} */
/* int	main(int argc, char **argv)
{
	char	*s;
	size_t	len;

	if (argc != 2)
	{
		printf("Error en número de argumentos");
		return (0);
	}
	s = argv[1];
	len = ft_strlen(s);
	printf("%zu\n", len);
	len = strlen(s);
	printf("%zu\n", len);
	return (0);
} */