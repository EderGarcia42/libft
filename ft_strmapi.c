/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegarci <edegarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 11:47:37 by edegarci          #+#    #+#             */
/*   Updated: 2024/04/22 15:17:34 by edegarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{

}

/*******************************************************************************/
/* This functions takes two parameters, the first one is a string, and the second 
one is a function.

What ft_strmapi does is apply the function f to every character of the string s.

It passes the index of the character in the string, and the character to the 
function f.

The result of the function f is placed in the new string at index i.

At the end, we return the new string resulting of the application of f on every 
character of the string.

Hints
First, we have to allocate enough memory for the whole string plus one for the 
NUL-terminating character.

Then we can loop over the string s, and call the function f on each character 
of s. */