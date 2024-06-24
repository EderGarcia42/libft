/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegarci <edegarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 16:24:16 by edegarci          #+#    #+#             */
/*   Updated: 2024/06/12 12:18:58 by edegarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/* int	main(int argc, char **argv)
{
	char	c;
	int		i;

	if (argc != 2)
	{
		printf("Error de argumentos\n");
		return (0);
	}
	c = argv[1][0];
	i = ft_isdigit(c);
	printf("ft_isascii %c %d\n", c, i);
	i = isdigit(c);
	printf("isascii %c %d\n", c, i);
	return (0);
} */