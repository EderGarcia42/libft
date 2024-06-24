/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegarci <edegarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:50:11 by edegarci          #+#    #+#             */
/*   Updated: 2024/06/12 12:19:28 by edegarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

/* Una letra */
/* int	main(void)
{
	int		c;
	char	letra;

	letra = 'a';
	c = ft_toupper(letra);
	printf("En mayúscula es: %c\n", c);
	return (0);
} */
/* Una palabra */
/* void convertir(char *word)
{
	while (*word)
	{
		*word = ft_toupper(*word);
		word++;
	}
} */
/* Argumentos */
/* int main(void)
{
	char	word[] = "hola";

	convertir(word);
	printf("En mayúsculas es: %s\n", word);
	return (0);
} */