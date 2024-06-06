/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegarci <edegarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 11:00:47 by edegarci          #+#    #+#             */
/*   Updated: 2024/06/06 16:01:19 by edegarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (s[i] != (char)c && i > 0)
		i--;
	if (s[i] == (char)c)
		return ((char *)(s + i));
	return (NULL);
}

/* int main(void)
{
	char *s = "Probando ejercicio";
	char c = 'e';
	char *res = ft_strrchr(s, c);
	printf("%s\n", res);
	return (0);
} */