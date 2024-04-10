/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegarci <edegarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 11:47:14 by edegarci          #+#    #+#             */
/*   Updated: 2024/04/10 14:22:54 by edegarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t maxlen)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < maxlen - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		++i;
	}
	if (maxlen > 0)
		dst[i] = '\0';
	if (maxlen < 1)
		return (0);
	while (src[j])
		j++;
	return (j);
}
