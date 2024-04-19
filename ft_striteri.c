/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegarci <edegarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 13:14:16 by edegarci          #+#    #+#             */
/*   Updated: 2024/04/19 13:19:38 by edegarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ************************************************************************** */
/* Permite aplicar una función a cada carácter de una cadena, proporcionando  */
/* el índice del carácter junto con el carácter mismo a la función            */
/* especificada. Esto puede ser útil para realizar operaciones específicas en */
/* cada carácter de una cadena, como transformaciones o análisis. 		      */
/* ************************************************************************** */
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (s && f)
	{
		i = 0;
		while (*s)
			f(i++, s++);
	}
}

/* La función ft_striteri es una función personalizada que aplica una función 
f a cada carácter de la cadena s. La función f se aplica en el lugar, lo que 
significa que modifica la cadena s directamente.

La función ft_striteri toma dos argumentos: un puntero a la cadena s y un 
puntero a la función f. La función f debe tomar dos argumentos: un entero sin 
signo y un puntero a un carácter.

Dentro de ft_striteri, primero se verifica si s y f no son NULL. Si alguno de 
ellos es NULL, la función no hace nada y termina inmediatamente.

Luego, se inicializa una variable i a 0. Esta variable se utiliza para rastrear 
el índice del carácter actual en la cadena.

Después, la función entra en un bucle while que se ejecuta mientras el carácter 
actual de la cadena no sea el carácter nulo de terminación. En cada iteración 
del bucle, se aplica la función f al carácter actual y su índice, y luego se 
incrementan i y s. Esto efectivamente aplica f a cada carácter de la cadena, 
junto con su índice. */
