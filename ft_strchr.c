/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegarci <edegarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 11:00:41 by edegarci          #+#    #+#             */
/*   Updated: 2024/06/12 12:19:17 by edegarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			cc;

	cc = (char) c;
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == cc)
		return ((char *) &s[i]);
	return (NULL);
}

/* int	main(int argc, char **argv)
{
	char	*str;
	char	*ptr;
	char	c;

	if (argc != 3)
	{
		printf("Error de argumentos\n");
		return (0);
	}
	str = argv[1];
	c = argv[2][0];
	ptr = ft_strchr(str, c);
	if (ptr == NULL)
		printf("No se encontro %c\n", c);
	else
		printf("Se encontro %c en %s\n", c, ptr);
	ptr = strchr(str, c);
	if (ptr == NULL)
		printf("No se encontro %c\n", c);
	else
		printf("Se encontro %c en %s\n", c, ptr);
	return (0);
} */