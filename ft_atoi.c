/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegarci <edegarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:01:25 by edegarci          #+#    #+#             */
/*   Updated: 2024/06/06 15:39:55 by edegarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	num;
	int	sign;

	i = 0;
	num = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0') * sign;
		i++;
	}
	return (num);
}
/* int	main(void)
{
	char	*str = "  -1234";
	printf("El numero en formato entero es: %d\n", ft_atoi(str));
	return (0);
} */
/* int	main(int argc, char **argv)
{
	int	num;
	int	other_num;

	if (argc != 3)
	{
		printf("Error de argumentos\n");
		return (0);
	}
	num = ft_atoi(argv[1]);
	other_num = ft_atoi(argv[2]);
	printf("El primer numero en formato entero es: %d\n", num);
	printf("El segundo numero en formato entero es: %d\n", other_num);
	return (0);
} */
