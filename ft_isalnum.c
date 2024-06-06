/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegarci <edegarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 15:20:11 by edegarci          #+#    #+#             */
/*   Updated: 2024/06/06 15:31:21 by edegarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
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
	i = ft_isalnum(c);
	printf("ft_isalnum %c %d\n", c, i);
	i = isalnum(c);
	printf("isalnum %c %d\n", c, i);
	return (0);
} */