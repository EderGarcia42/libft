/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegarci <edegarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:36:11 by edegarci          #+#    #+#             */
/*   Updated: 2024/06/12 12:18:57 by edegarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
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
	i = ft_isalpha(c);
	if (i == 0)
		printf("error\n");
	else
		printf("ft_isalpha %c\n", c);
	i = isalpha(c);
	if (i == 0)
		printf("error\n");
	else
		printf("isalpha %c\n", c);
	return (0);
} */