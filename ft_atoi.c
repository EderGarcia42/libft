/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegarci <edegarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:01:25 by edegarci          #+#    #+#             */
/*   Updated: 2024/04/10 16:24:30 by edegarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_space(int c)
{
	if ((c > 8 && c < 14)
		|| (c == 32))
		return (8192);
	return (0);
}

static int	check_digit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}

int	ft_atoi(char const *str)
{
	long long int	n;
	long long int	check;
	int				sign;

	n = 0;
	sign = 1;
	while (*str && check_space(*str))
		str++;
	if (*str == 45 || *str == 43)
	{
		if (*str == 45)
			sign *= -1;
		str++;
	}
	while (*str && check_digit(*str))
	{
		check = n;
		n = n * 10 + sign * (*str - 48);
		if (n > check && sign < 0)
			return (0);
		if (n < check && sign > 0)
			return (-1);
		str++;
	}
	return (n);
}

/* Escanea la cadena de entrada y la convierte en un entero. 
Omite cualquier espacio en blanco inicial avanzando el puntero. Si se 
encuentra un signo más (+) o menos (-), determina el signo del número y 
avanza el puntero. Luego, procesa cada carácter de dígito y calcula el valor 
entero correspondiente. Realiza comprobaciones para evitar desbordamientos 
comparando el valor actual con el valor anterior multiplicado por el signo. 
Si se produce un desbordamiento, devuelve 0 si el signo es positivo o -1 si 
el signo es negativo. Finalmente, devuelve el valor entero resultante. */