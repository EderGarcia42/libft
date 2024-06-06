/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegarci <edegarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 15:01:44 by edegarci          #+#    #+#             */
/*   Updated: 2024/06/06 15:31:58 by edegarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if ((c >= '0' && c <= '9'))
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
	printf("ft_isdigit %c %d\n", c, i);
	i = isdigit(c);
	printf("isdigit %c %d\n", c, i);
	return (0);
} */