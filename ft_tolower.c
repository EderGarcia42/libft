/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegarci <edegarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:50:11 by edegarci          #+#    #+#             */
/*   Updated: 2024/06/12 12:19:28 by edegarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

/* int	main(void)
{
	int		c;
	char	letra;

	letra = 'a';
	c = ft_toupper(letra);
	printf("En minúscula es: %c\n", c);
	return (0);
} */
/* Una palabra */
/* void convertir(char *word)
{
	while (*word)
	{
		*word = ft_tolower(*word);
		word++;
	}
} */
/* Argumentos */
/* int main(void)
{
	char	word[] = "HOLA";

	convertir(word);
	printf("En minúsculas es: %s\n", word);
	return (0);
} */